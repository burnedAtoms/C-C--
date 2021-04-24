
#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    int n;
    cin >>n;
    
    while(n--){
        int m,flag = 0;
        cin >> m;
        int arr;
        int sq = 1;
        for(int i = 0;i<m;i++){
            cin >> arr;
            if(floor(sqrt(arr))*floor(sqrt(arr)) != arr){
                flag = 1;
            }
        }
        cout<< ((flag)?"YES":"NO") << endl;
       
    }

    return 0;
}
