#include<iostream>
using namespace std;
class complex{
    int a;
    int b;
    public:
        void setcomplex(int c1,int c2){
            a=c1;
            b=c2;
        }
        void setdatabyadd(complex c1,complex c2){
            a=c1.a + c2.a;
            b=c1.b + c2.b;
        }
        void print(){
            cout<<"your complex number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

int main(){
    complex c1,c2,c3;
    c1.setcomplex(4,3);
    c1.print();
    c2.setcomplex(5,6);
    c2.print();
    c3.setdatabyadd(c1,c2);
    c3.print();
    return 0;
}