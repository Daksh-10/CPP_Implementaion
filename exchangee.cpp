#include<iostream>
using namespace std;
class B;
class A{
    int val;
    friend void exchangee(A &,B &);
    public:
        void inval(int data){
            val=data;
        }
        int display(void){
            return val;
        }
};

class B{
    int data;
    friend void exchangee(A &,B &);
    public:
        void inval(int val){
            data =val;
        }
        int display(void){
            return data;
        }
};


void exchangee(A &x,B &y){
    int temp=x.val;
    x.val=y.data;
    y.data=temp;
}

int main(){
    A x;
    B y;
    x.inval(6);
    y.inval(7);
    exchangee(x,y);
    int a=x.display();
    int b=y.display();
    cout<<a<<b;

    return 0;
}