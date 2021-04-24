#include<iostream>

using namespace std;

int main(){
    char bitmap[32][32];
    string dir;
    int tc, sx,sy,dx,dy,cmd = 0,count = 0;
    int size = 32;
    cin >> tc;
    while(tc--){
        cmd=0;
      	count++;
        cin >> sy >> sx;
        cin >> dir;
        dx = size - sx - 1;
        dy = sx+1;
        if((sy >= 0 && sy < 32) && (sx >= 0 && sx<32)){
            for(int i = 0;i<32;i++){
                for(int j = 0;j<32;j++){
                    bitmap[i][j] = '.';
                }
            }
        }
        while(dir[cmd] != '.' && cmd != dir.size()){
            if(dir[cmd] == 'E'){
                bitmap[dx+1][dy] = 'X';
                dy++;
            }else if(dir[cmd] == 'N'){
                bitmap[dx][dy] = 'X';
                dx--;
            }else if(dir[cmd] == 'W'){
                bitmap[dx][dy-1] = 'X';
                dy--;
            }else if(dir[cmd] == 'S'){
                bitmap[++dx][dy-1] = 'X';
            }
            cmd++;
        }
          
      	cout << "Bitmap #" << count << endl;
            for(int i = 0;i<32;i++){
                for(int j = 0;j<32;j++){
                    cout << bitmap[i][j];
                }
                cout << endl;
            }
      		cout <<endl;
    }
    
    return 0;
}







