#include<iostream>
#include<cctype>
using namespace std;

class Digit{
	private:
	  int digit;
	public:
	Digit(int x = 0){setDigit(x);}
	 void setDigit(int x){
	    digit = (x < 10)?x:0;
	 }
	 int getDigit() const{
	   return digit;
	 }	
};

class IntNumber{
	private:
	 void Normalize(){
		while(size > 0 && digits[size-1].getDigit() == 0){
		   size--;
		}
		if(size == 0){
		  isNeg = false;
		}
	 }
	 bool islargerthan(const IntNumber *num) const {
	   if(size != num->size){
		 return (size > num->size);
	   }
       for(int i = size-1;i>=0;i--){
           if(digits[i].getDigit() != num->digits[i].getDigit()){
               return (digits[i].getDigit() > num->digits[i].getDigit());
           }
       }
       return false;
	 }
	public:
        IntNumber():size(0),isNeg(false){}
        IntNumber(const string &s):size(0),isNeg(false){
            int i = 0;
            while(i < s.size() && isspace(s[i])){
                i++;
            }
            while(i < s.size() && (s[i] == '-' || s[i] == '+')){
                if(s[i]=='-'){
                    isNeg = (isNeg)?false:true;
                }
                i++;
            }
            while(i < s.size() && isdigit(s[i])){
                size++;
                i++;
            }
            for(int j = 0;j<size;j++){
                digits[j].setDigit(s[--i] - '0');
            }
            Normalize();
        }
        IntNumber *add(const IntNumber *num) const{
            if(num->islargerthan(this)){
                return num->add(this);
            }
            IntNumber *sum = new IntNumber(*this);
            if(sum->isNeg == num->isNeg){
                int carry = 0,i;
                for(i = 0;i<this->size;i++){
                    carry+= sum->digits[i].getDigit() + num->digits[i].getDigit();
                    sum->digits[i].setDigit(carry%10);
                    carry/=10;
                }
                if(carry > 0){
                    sum->digits[sum->size++].setDigit(carry);
                }
            }else{
                int diff;
                for(int i = num->size - 1;i>=0;i--){
                    diff = sum->digits[i].getDigit() - num->digits[i].getDigit();
                    if(diff < 0){
                        diff+=10;
                        int j = i+1;
                        while(sum->digits[j].getDigit() == 0){
                            sum->digits[j].setDigit(9);
                            j++;
                        }
                        sum->digits[j].setDigit(sum->digits[j].getDigit() - 1);
                    }
                    sum->digits[i].setDigit(diff);
                }
                sum->Normalize();
            }
            return sum;
        }

        void display() const{
            if(size == 0){cout << "0";}
            if(isNeg){cout << "-";}
            for(int i = size-1;i>=0;i--){
                cout << digits[i].getDigit();
            }
        }
	private:
	Digit digits[1000];
	bool isNeg;
	int size;
};

int main()
{
  char num1[10000], num2[10000];
  cin>>num1>>num2;
  IntNumber *number1 = new IntNumber(num1);
  IntNumber *number2 = new IntNumber(num2);
  number1->display();
  cout<<endl;
  number2->display();
  cout<<endl;
  number1->add(number2)->display();
  cout<<endl;
  number2->add(number1)->display();
  return 0;
}