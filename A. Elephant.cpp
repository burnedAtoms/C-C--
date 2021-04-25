#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int  i = 5,count = 0;
    while(n){
        if(n >= i){
            n-=i;
            count++;
        }else{
            i--;
        }
    }
    cout << count;

    return 0;
}