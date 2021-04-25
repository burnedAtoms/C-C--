#include<iostream>

using namespace std;
int main(){
    int n,k,w,sum = 0;
    cin >> n >> k>> w;

    for(int i = 1;i<=w;i++){
        sum += i*n;
    }
    if(sum > k){
        cout << sum - k;
    }else{
        cout << 0;
    }

    return 0;
}