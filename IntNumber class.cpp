#include<iostream>
#include<string>

using namespace std;

class Digit
{
  private:
  	int digit;
  public:
  	Digit(){
    	digit = 0;
    }
  	Digit(int a){
    	if(a < 10 && a >= 0){
    		digit = a;
    	}else{
    		digit = 0;
    	}
   }
  int setDigit(int a){
  	if(a < 10 && a >= 0){
    	digit = a;
    }else{
    	digit = 0;
    }
  }
  int getDigit(){
  	return digit;
  }
};


class IntNumber{
	private:
  		Digit number[1000];
  	public:
  	IntNumber(){
    }
  
  	IntNumber(char* notString){
    	if (notString[0]>='0' && notString[0] <= '9' ){
             	number = std::stoull(notString);
          		display(number);
        }else if((notString[0] >='a' || notString[0] >= 'A') && (notString[0] <='z' || notString[0] <= 'Z')){
            display(0);
        }else if(notString[0] == '+'){
        	number = std::stoull(notString);
          	display(number);
        }else if(notString[0] == '-'){
          number = std::stoull(notString);
          display(number);
        }
    }
  
  	void display(auto x){
    	cout << x;
    }
};


int main(){
	char s[1000];
	cin >> s;
	IntNumber obj(s);
	cin;
  return 0;
}
