#include<iostream>
#include<string>
#include<stack>

using namespace std;

bool isValid(string s) {
        stack<char>stk;
        if(s.length()%2 != 0)return false;
        for(int i =0;i<s.length();i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                stk.push(s[i]);
            }else{
                if(stk.empty())return false;
                
                if(s[i] == ')' && stk.top() == '('){
                    stk.pop();
                }else if(s[i] == '}' && stk.top() == '{'){
                    stk.pop();
                }else if(s[i] == ']' && stk.top() == '['){
                    stk.pop();
                }else{
                    return false;
                }
            }
        }
        if(stk.empty())return true;
        return false;
    }

int main(){
    string s;
    cin >> s;
    if(isValid(s)){
        cout << "Yes";
    }else{
        cout << "No";
    }


    return 0;
}