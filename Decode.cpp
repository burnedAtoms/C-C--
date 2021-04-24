#include<iostream>
#include<string>

using namespace std;

class Decode
{
  private:
      string decodedString;
      int pos;
      int dec;
      char a;
      string temp;
  public:
     Decode(){
        pos = 0;
        dec = 0;
     }
      Decode(string s){
        pos = 0;
        for(int i = 0;s[i]!='\0';){
          pos = 0;
          temp.clear();
            for(int j = 0;j<3;j++){
                temp+= s[i+j];
                pos++;
            }
          i+=pos;
          dec = stoi(temp);
          decodedString+=static_cast<char>(dec);
        }
      }
  
  
      string decode(){
        return decodedString;
      }
};
int main() {
  string str;
  cin>>str;
  Decode *code = new Decode(str);
  cout<<code->decode();
  return 0;
}