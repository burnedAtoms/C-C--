#include<iostream>

using namespace std;

int main(){
    int n,p,v,t,ans = 0,vote;
    cin >> n;
    
    while(n--){
        cin >> p >> v >> t;
        vote = p+v+t;
        if(vote >= 2){
            ans++;
        }
    }
    cout << ans;

}