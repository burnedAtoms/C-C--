#include<iostream>
#include<cmath>

using namespace std;

int main(){
    size_t n,m,a,stones = 0;
    cin >> n >> m >> a;
    int area = n*m;
    size_t count = ((m+a-1)/a) * ((n+a-1)/a);
    cout << count;
    return 0;
}