#include<iostream>

using namespace std;

class bar3d
{
    public:
        int height;
        int depth;
        int width;
        bar3d(int x,int y,int z);
};
bar3d::bar3d(int x,int y,int z){
            if(x <= 0 || x >= 1000){
                height = 0;
                depth = 0;
                width = 0;
            }else if(y <= 0 || y >= 1000){
                height = 0;
                depth = 0;
                width = 0;
            }else if(z <= 0 || z >= 1000){
                height = 0;
                depth = 0;
                width = 0;
            }else{
                height = x;
                depth = y;
                width = z;

            }

}     

int main(){

    bar3d objBar3d(3,4,0);
    return 0;
}

void output(int arr[], int n, char ch) {
  for(int i = 0;i<arr.length();i++){

  }
}