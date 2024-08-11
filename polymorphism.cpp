#include<iostream>
using namespace std;

class BaseClass{
    public:
        int var_base;
        void display(){
            cout<<"The value of baseclass variable is "<<var_base<<endl;
        }
};
class DerivedClass: public BaseClass{
    public:
        int var_derived;
        void display(){
            cout<<"The value of baseclass variable is "<<var_base<<endl;
            cout<<"The value of derivedclass variable is "<<var_derived<<endl;
        }
};

int main(){
    BaseClass *var_baseclass;
    BaseClass obj1;
    DerivedClass obj2;
    DerivedClass obj3;
    var_baseclass=&obj2;
    var_baseclass->var_base=69;
    var_baseclass->display();

    DerivedClass *var_derivedclass;
    var_derivedclass=&obj3;
    var_derivedclass->var_derived=4574;
    var_derivedclass->var_base=574;
    var_derivedclass->display();
    return 0;
}