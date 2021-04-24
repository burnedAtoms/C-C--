#include<iostream>
#include <string>
#include<stdio.h>

using namespace std;
class Fraction
{
  private:
  	int Numerator;
  	int Denominator;
    int min,pos;
  public:
  Fraction(){
    Denominator = 1;
    Numerator = 1;
    min = 0;
  }
  Fraction(int numerator, int denominator){ 
    if(denominator != 0){
    	Denominator = denominator;
        Numerator = numerator;
    }else{
        exit(0);
    }
  }
  void setNumerator(int a){
  	Numerator = a;
  }
  void setDenominator(int b){
  	if(b != 0){
    	Denominator = b;
    }else{
        exit(0);
    }
  }
  int getNumerator(){
  	return Numerator;
  }
  int getDenominator(){
  	return Denominator;
  }

  Fraction &operator!(){  
    Fraction *frac1 = new Fraction(Denominator,Numerator);
    return *frac1;
  }
  Fraction operator+(const Fraction& frac1) const{
      int gcd,nNum,nFrac1Num;
      nFrac1Num = frac1.Numerator;
      nNum = Numerator;
      if(Denominator > frac1.Denominator && Denominator%frac1.Denominator == 0){
        gcd = Denominator;
      }else if(Denominator < frac1.Denominator && frac1.Denominator%Denominator == 0){
        gcd = frac1.Denominator;
      }else{
        gcd = frac1.Denominator*Denominator;
      }
      nFrac1Num *=(gcd / frac1.Denominator);
      nNum *= (gcd / Denominator);
      return Fraction((nNum + nFrac1Num),gcd);
  }
  Fraction operator-(const Fraction& frac1) const{
      int gcd,nNum,nFrac1Num;
      nFrac1Num = frac1.Numerator;
      nNum = Numerator;
      if(Denominator > frac1.Denominator && Denominator%frac1.Denominator == 0){
        gcd = Denominator;
      }else if(Denominator < frac1.Denominator && frac1.Denominator%Denominator == 0){
        gcd = frac1.Denominator;
      }else{
        gcd = frac1.Denominator*Denominator;
      }
      nFrac1Num *= (gcd / frac1.Denominator);
      nNum *=(gcd / Numerator);
      return Fraction((nNum - nFrac1Num),gcd);
  }
  Fraction operator*(const Fraction& frac1) const{      
      return Fraction((Numerator * frac1.Numerator),(Denominator*frac1.Denominator));
  }
  Fraction operator/(const Fraction& frac1) const{      
      return Fraction((Numerator * frac1.Denominator),(Denominator*frac1.Numerator));
  }
  Fraction operator=(const Fraction& frac1){     
    Numerator = frac1.Numerator;
    Denominator =frac1.Denominator; 
      return *this;
  }

  
  
  void display(){
      int check = (Numerator<Denominator)?Numerator:Denominator;
      int i;
    if(Numerator == 0){
        cout << "(" << 0 << ")";
        return;
    }else if(Denominator != 0){
        for(i=check;i>=2;i--){
            if(Numerator%i == 0 && Denominator%i==0 ){
                break;
            }
        }
    	Denominator /= i;
        Numerator /= i;
    }else if(Denominator == 0){
        exit(0);
    }
  	if(Denominator != 1 && (Numerator%Denominator) != 0){
    	cout << "(" << Numerator << "/" << Denominator << ")";
    }else if((Numerator%Denominator) == 0 || (Denominator == 1)){
    	cout << "(" << Numerator/Denominator << ")";
    }
  }
};

ostream& operator<<(std::ostream &stream, Fraction &frac1){
      int check = (frac1.getNumerator()<frac1.getDenominator())?frac1.getNumerator():frac1.getDenominator();
      int i;
    if(frac1.getNumerator() == 0){
        stream << "(" << 0 << ")";
    }else if(frac1.getDenominator() != 0){
        for(i=check;i>=2;i--){
            if(frac1.getNumerator()%i == 0 && frac1.getDenominator()%i==0 ){
                break;
            }
        }
    	frac1.setDenominator(frac1.getDenominator() / i);
        frac1.setNumerator(frac1.getNumerator() / i);
    }else if(frac1.getDenominator() == 0){
        exit(0);
    }
  	if(frac1.getDenominator() != 1 && (frac1.getNumerator()%frac1.getDenominator()) != 0){
    	stream << "(" << frac1.getNumerator() << "/" << frac1.getDenominator() << ")";
    }else if((frac1.getNumerator()%frac1.getDenominator()) == 0 || (frac1.getDenominator() == 1)){
    	stream << "(" << frac1.getNumerator()/frac1.getDenominator() << ")";
    }
      return stream;
  } 

int main(){
    Fraction a, b(1,2), c(1,2), d(1,2), e(1,2), f(1,2);
    a =  ((!b + c) - d);
    cout << a;
    return 0;
}