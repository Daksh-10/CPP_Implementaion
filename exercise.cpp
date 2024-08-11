#include<iostream>
#include <cmath>
using namespace std;
class SC{
    protected:
    int a;
    int b;
    public:
        void inputv(){
            cout<<"Enter 2 values: "<<endl;
            int f,h;
            cin>>f;
            cout<<" ";
            cin>>h;
            a=f;
            b=h;
        }

        void calc(){
            cout<<"press 1 for mul , 2 for add , 3 for sub , 4 for div :";
            int t;
            cin>>t;
            if (t==1)
            {
                cout<<a*b<<endl;
            }
            if (t==2)
            {
                cout<<a+b<<endl;
            }
            if (t==3)
            {
                cout<<a-b<<endl;
            }
            if (t==4)
            {
                cout<<a/b<<endl;
            }
            else if(t>4)
            {
                cout<<"Your preference doesn't exist "<<endl;
            }
            
        }
};

class SCC{
    protected:
    int a;
    int b;
    public:
        void inputv2(){
            cout<<"Enter 2 values: "<<endl;
            int f,h;
            cin>>f;
            cout<<" ";
            cin>>h;
            a=f;
            b=h;
        }

        void calc2(){
            cout<<"press 1 for sin , 2 for cos , 3 for square root , 4 for log :";
            int t;
            cin>>t;
             if (t==1)
            {
                cout<<cos(a)<<" "<<cos(b)<<endl;
            }
            if (t==2)
            {
                cout<<sin(a)<<" "<<sin(b)<<endl;
            }
            if (t==3)
            {
                cout<<sqrt(a)<<" "<<sqrt(b)<<endl;
            }
            if (t==4)
            {
                cout<<log(a)<<" "<<log(b)<<endl;
            }
            else if (t>4)
            {
                cout<<"Your preference doesn't exist "<<endl;
            }
        }

};

class Hybrid:public SC , public SCC
{
    public:
    void processs(){
        cout<<"press 1 for simple calculator and 2 for scientific calculator";
        int c;
        cin>>c;
        if (c==1)
        {
            inputv();
            calc();
        }
        if (c==2)
        {
            inputv2();
            calc2();
        }
        
    }
};
int main(){
    SC Daksh;
    Daksh.inputv();
    Daksh.calc();

    SCC Ankit_ke;
    Ankit_ke.inputv2();
    Ankit_ke.calc2();

    Hybrid Karan;
    Karan.processs();

    return 0;
}