#include<iostream>
#include<stack>
using namespace std;

#define MAX 10
class Stack{
    public:
    Stack():top(-1){}
    bool push(int n){
        if(top >= MAX -1){
            cout << "ERROR: OverFlow!";
            return false;
        }
        arr[++top] = n;
        cout << "pushed: " << arr[top] << endl;
        return true;
    }
    int pop(){
        if(top == -1){
            return 0;
        }
        int x  = arr[top--];
        cout << "Popped: " << x << endl;
        return x;
    }

    
    private:
    int top;
    int arr[10];

};

int main(){
    //Stack *a = new Stack();
    stack<int> b,a;
    if(b.empty()){
        b.push(1);
        b.push(2);
        b.push(3);
        b.push(4);
        b.push(5);
    }

    

    a.emplace(1);
    a.emplace(2);
    a.emplace(3);
    a.emplace(4);
    a.emplace(5);
    a.emplace(6);
    a.emplace(7);
    a.emplace(8);
    a.emplace(9);
    a.emplace(10);
    a.pop();
    a.emplace(11);

    b.swap(a);

    while(!b.empty()){
        cout << b.top()<< endl;
        b.pop();
    }

    return 0;
}