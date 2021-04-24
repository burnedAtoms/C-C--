#include<iostream>
#include<cmath>

using namespace std;

typedef int Matrix[5][5];

int main(){
    Matrix mx;
    int moves = 0,x,y;
    for(int i = 0;i<5;i++){
        for(int j = 0;j<5;j++){
            scanf("%d ",&mx[i][j]);
            if(mx[i][j] == 1){
                x = i;
                y = j;
                mx[i][j] = 0;
            }
        }
    }
    
    cout << abs(x-3) + abs(y-3);
    return 0;
}