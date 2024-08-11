#include<iostream>
using namespace std;

class num{
    public:
        num(){
            cout<<"The constructor is called this time "<<endl;
        }
        ~num(){
            cout<<"This is the time when the destructor is called "<<endl;
        }

};

int main(){
    num n1;
    {
        cout<<"This time two new objects are formed "<<endl;
        num n2,n3;
        cout<<"Exiting this block ";
    }
    cout<<"Back to main "<<endl;
    return 0;
}