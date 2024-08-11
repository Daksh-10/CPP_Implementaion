#include<iostream>
using namespace std;
class Complex
{
private:
    int a,b;
public:
    Complex (void){
        a=0;
        b=0;
    }
    void print()
    {
        cout << "your complex number is " << a << " + " << b << "i" << endl;
    }
};

int main(){
    Complex c1,c2,c3;
    c1.print();
    c2.print();
    c3.print();

    return 0;
}