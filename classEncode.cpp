#include<iostream>
#include<string>
#include<cctype>

using namespace std;

class Encode
{
  private:
  	string number;
    int decVal;
  public:
    Encode(){
        decVal = 0;
    }

  	Encode(string s){
      for(int  i = 0;i<s.size();i++){
        decVal = s[i];
        if(decVal < 100){
            number += "0" + to_string(decVal);
        }else{
            number += to_string(decVal);
        }
      }
    }
  
  	string encode(){
      return number;
    }
};

int main() {
  string str;
  getline(cin, str);
  Encode *code = new Encode(str);
  cout<<code->encode();
  return 0;
}