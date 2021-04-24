#include<iostream>

using namespace std;

int main(){
    int i,k;
    int quali = 0,cnt = 0;
    cin >> i >> k;
    int p[50]; 
    for(int j = 0;j<i;j++){
        std::cin >> p[j];
    }
    for(int l = 0;l<i;l++){
        if(p[l] >= p[k-1] && p[l] > 0){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}