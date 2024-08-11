#include<iostream>
using namespace std;

class Number{
    int a;
    public:
        Number(){
            a=0;
        }
        Number(int num){
            a=num;
        }
        Number(Number &obj){
            cout<<"Copy counstructor is called!!!!"<<endl;
            a=obj.a;
        }
        void display(){
            cout<<"The number is "<<a<<endl;
        }
};

int main(){
    Number x,y,z(45);
    x.display();
    y.display();
    z.display();
    Number z1(z);
    z1.display();
    return 0;
}