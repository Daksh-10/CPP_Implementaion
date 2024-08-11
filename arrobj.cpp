#include<iostream>
using namespace std;
class employee
{
private:
    int id;
    int salary;
public:
    void setid(){
        cout<<"enter the id of the employee"<<endl;
        cin>>id;
    }
    void setgetsalary(void);
    void getid(void);
};

void employee::setgetsalary(){
    cout<<"Enter the salary of employee id "<<id<<endl;
    cin>>salary;
    cout<<"The salary of employee id "<<id<<" is "<<salary<<endl;
}
void employee::getid(void){
    cout<<"The id of this employee is "<<id<<endl;
}

int main(){
    employee org[3];
    for (int i = 0; i < 3; i++)
    {
        org[i].setid();
        org[i].getid();
        org[i].setgetsalary();
    }
    
    return 0;
}