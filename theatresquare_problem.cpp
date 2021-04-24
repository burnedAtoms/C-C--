#include<iostream>
#include<cmath>
 
using namespace std;
 
int main(){
    uint64_t n,m;
    int sum = 0,count = 0;
    cin >> n;
    while(n--){
        cin >> m;
        if(m < 2050){
            cout << -1 << endl;
        }else{
            sum = 0;
            count = 0;
            n/=2050;
            while(m){
                count += m%10;
                m/=10;
            }
            cout << count << endl;
        }
        
    }
        return 0;
}