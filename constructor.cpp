#include<iostream>
using namespace std;

class Base{
    int data;
    public:
        Base(int a){
            data=a;
            cout<<"Base class constructor called"<<endl;
        }
};

class Base1{
    int data1;
    public:
        Base1(int a){
            data1=a;
            cout<<"Base1 class constructor called"<<endl;
        }

};

class Base2{
    int data2;
    public:
        Base2(int a){
            data2=a;
            cout<<"Base2 class constructor called"<<endl;
        }
};

class Derived:public Base1 , public Base2,virtual public Base{
    int derived1;

    public:
        Derived(int a ,int b, int c, int d):Base2(c),Base1(a),Base(d){
            derived1=b;
            cout<<"Derived class constructor called"<<endl;
        }
};

int main(){
    Derived a(2,4,5,6);
    return 0;
}