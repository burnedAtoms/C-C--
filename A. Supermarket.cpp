#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double t,n,k,m;
    double min = 0;
    cin >> t >> m;
    int temp = 1;

    while(t--){
        cin >> n >> k;
        double price = m*n/k;
        //cout << price;
        if(temp){
            min = price;
            temp = 0;
            //cout << fixed << setprecision(8) << min;
            
        }else{
            if(price < min){
                min = price;
            }
        }
    }
    cout << fixed << setprecision(8) << min;
    return 0;
}