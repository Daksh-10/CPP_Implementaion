#include<iostream>
using namespace std;

class binary
{
    string s;
public:
    void read(void);
    void chk_bi(void);
};

void binary::read(void)
{
    cout<<"Enter a NUmber"<<endl;
    cin>>s;
}

void binary::chk_bi()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i)!='0' && s.at(i)!='1')
        {
            cout<<"The number is not binary";
            exit(0);
        }
        
    }
    
}

int main(){
    binary b;
    b.read();
    b.chk_bi();
    
    return 0;
}