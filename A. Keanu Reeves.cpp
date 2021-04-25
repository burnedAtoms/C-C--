#include<string>
#include<iostream>

using namespace std;
int main(){
    int n,c = 1,cz = 0,co= 0;
    string str,ns;
    cin >> n >> str;
    
    if(n%2 != 0){
        cout << c << endl;
        cout << str;
    }else{

        for(int i = 0;i<n;i++){
            if(str[i] == '0'){
                cz++;
            }else{
                co++;
            }
        }
        if(co != cz){
            cout << c << endl;
            cout << str;
            return 0;
        }
        for(int i = 0;i<n;i++){
            if(i == n%2){
                ns+= str[i];
                ns+= " ";
            }else{
                ns+= str[i];
            }

        }
        for(int i = 0;i <str.length();i++){
            if(ns[i] == ' ')c++;
        }
        cout << c << endl;
        cout << ns;
    }
    return 0;
}