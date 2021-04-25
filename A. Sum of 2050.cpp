#include<iostream>

using namespace std;

int main()
{
  int  t,n;
  cin >> t;
  while(t--){
      cin >> n;

      if(n < 2050 || n%2050 != 0){
          cout << -1 << endl;
      }else{
        int count = 0;
        n/=2050;
        while(n){
            count+= n%10;
            n/=10;
        }
        cout << count << endl;
      }
      

  }  
 return 0;   
}