#include<iostream>

using namespace std;

int main(){
    int up_count,dwn_count;
    int choice,n,votes;
    cin  >> n;
    while(n--){
        cin >> votes;
        up_count = 0;
        dwn_count = 0;
        while(votes--){
            cin >> choice;
            if(choice == 1 || (choice  == 3)){
                up_count++;
            }else if(choice == 2 || (choice  == 3 )){
                dwn_count++;
            }
        }
        cout << up_count << endl;

    }
    return 0;
}