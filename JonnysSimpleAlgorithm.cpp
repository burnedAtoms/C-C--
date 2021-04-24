#include<iostream>
#include<stdio.h>
#include<cctype>
#include<vector>

using namespace std;

class Movement{
    private:
        int x;
        int y;
        int stack[][2];
    public:

};

int main(){
    int tCase,Dx,Dy,strtX,strtY,retr;
    char moves;
    vector<string>block = {"|_","|_|"};
    string roof = " _";

    scanf("%d",&tCase);
    
    while(tCase--){
        getchar();
        scanf("%d%d\n",&Dx,&Dy);
        scanf("%d%d\n",&strtX,&strtY);
        Dx++;
        while(scanf("%c",&moves) == isalpha(moves)){
            if(moves == 'F'){
                scanf("%d",&retr);
            }
            scanf("%c",&moves);
            getchar();
        }
        for(int i = 0;i<Dy;i++){
            cout << roof;
        }
        cout << endl;
        for(int i = 0;i<Dx-1;i++){
            for(int j = 0;j<Dy;j++){
                if(j == Dy-1){
                    cout << block.at(1);
                }else{
                    cout << block.at(0);
                }
                
            }
            cout << '\n';
        }
    }
    
    

    return 0;
}