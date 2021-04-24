#include<string>
#include<iostream>
using namespace std;



string tolw(string const s1,int len) {
    string res;
    for(int i = 0;i<len;i++){
        res += tolower(s1[i]);
    }
    return res;
}

int main(){
    string s1,s2;
    cin >>s1;
    cin >>s2;
    if(tolw(s1,s1.size()) == tolw(s2,s2.size())){
        cout << 0;
    }else if(tolw(s1,s1.size()) < tolw(s2,s2.size())){
        cout << -1;
    }else if (tolw(s1,s1.size()) > tolw(s2,s2.size())){
        cout << 1;
    }
    return 0;
}

