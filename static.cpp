#include<iostream>
using namespace std;
class employee{
    int id;
    static int count;
    public:
        void getid(void){
            cout<<"enter the id of employee "<<endl;
            cin>>id;
            count++;
        }
        void displayid(){
            cout<<"The id of employee number "<<count<<" is "<<id<<endl;
        }
        static void getcount(){
            cout<<"The total count of the employee is "<<count<<endl;
        }
};

int employee::count;

int main(){
    employee daksh,ankit,karan;
    daksh.getid();
    daksh.displayid();
    employee::getcount();

    ankit.getid();
    ankit.displayid();
    employee::getcount();
    
    karan.getid();
    karan.displayid();
    employee::getcount();
    return 0;
}