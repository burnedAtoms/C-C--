#include<iostream>

using namespace std;

class bar3d
{
    public:
        int height;
        int depth;
        int width;

    bar3d(int height,int width,int depth){
        if(height <= 0 || height >= 1000){
            height = 0;
            depth = 0;
            width = 0;
        }else if(width <= 0 || width >= 1000){
            height = 0;
            depth = 0;
            width = 0;
        }else if(depth <= 0 || depth >= 1000){
            height = 0;
            depth = 0;
            width = 0;
        }
    }     
};

int main(){

    bar3d objBar3d;
    return 0;
}