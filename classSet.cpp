#include<iostream>
using namespace std;
class Set
{
  public:
  	void display()
    {
      int j;
      for(j = 0;j < count;j ++)
        std::cout<<element[j]<<" ";
    }
    Set(){
        count = 0;
    }
    Set(const Set &set1) {
        count = set1.count;
        for(int i = 0;i<count;i++){
            *(element+i) = *(set1.element+i);
        }   
    }
    int add(const int e){
        int flag = 0;
        int aCount = 0;
        for(int i = 0;i<count;i++){
            if(element[i] == e){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            element[count] = e;
            count++;
            aCount++;
        }
        return aCount;
    }

    int add(const Set a){
        int flag = 0;
        int it = count-1;
        int aCount = 0;
        for(int i = 0;i<a.count;i++){
            for(int j = 0;j<count;j++){
                if(element[j] == a.element[i]){
                    flag = 1;
                    break;
                }else{
                    flag = 0;
                }
            }
            if(flag == 0){
                element[count++] = a.element[i];
                aCount++;
            }
            
        }
        
        return aCount;
    }


    Set operator+(const Set &b){
        Set *c = new Set();
        this->add(b);
        c->count = this->count;
        for(int i = 0;i<this->count;i++){
            c->element[i] = this->element[i];
        }
        return *c;
    }
    Set operator-(const Set &b){
        Set *c = new Set();
        c->count = 0;
        int flag = 0;
        int it = 0;
        for(int i = 0;i<b.count;i++){
            for(int j = 0;j<count;j++){
                if(element[j] == b.element[i]){
                    flag = 1;
                    break;
                }else{
                    flag = 0;
                }
            }
            if(flag == 1){
                c->element[c->count++] = b.element[i];
            }
            
        }
        return *c;
    }
  private:
  	int element[100];
  	int count;
};

int main(){
    Set *test = new Set();
    test->add(2);
    test->add(1);
    test->add(3);
    test->add(4);
    test->add(2);
    test->add(2);
    test->add(7);
    Set *test2 =new Set();
    test2->add(2);
    test2->add(1);
    test2->add(3);
    test2->add(4);
    test2->add(2);
    test2->add(2);
    test->add(9);
    Set *result = new Set((*test2 - *test));
    test2->display();

    return 0;
}