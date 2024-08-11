#include<iostream>
using namespace std;

class Employee{
    public:
        int id;
        int salary;
        Employee(int inpid){
            id=inpid;
            salary=34;
        }
        Employee(){}
};

class Programmer: public Employee{
    public:
        int languagecode;
        Programmer(int inpid){
            id = inpid;
            languagecode = 9;
        }
        void getData(){
            cout<<id<<endl;
        }

};

int main(){
    
    return 0;
}