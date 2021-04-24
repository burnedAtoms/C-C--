#include<iostream>

using namespace std;

int main (){
    int n,m_count = 0,c_count = 0,m,c;
    cin >> n;
    while(n--){
        cin >> m >> c;
        if(m != c){
            if(m > c){
                m_count++;
            }else{
                c_count++;
            }
        }
    }
    if(m_count > c_count){
        cout << "Mishka";
    }else if(c_count > m_count){
        cout << "Chris";
    }else{
        cout << "Friendship is magic!^^";
    }
    

    return 0;
}