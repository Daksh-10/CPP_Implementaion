#include <iostream>
using namespace std;
class Complex;
class calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int setrealdatabyadd(Complex, Complex);
};
class Complex
{
    friend int calculator ::setrealdatabyadd(Complex, Complex);
    int a;
    int b;

public:
    void setcomplex(int c1, int c2)
    {
        a = c1;
        b = c2;
    }

    void print()
    {
        cout << "your complex number is " << a << " + " << b << "i" << endl;
    }
};

int calculator::setrealdatabyadd(Complex c1, Complex c2)
{
    return c1.a + c2.a;
}
int main()
{
    Complex c1, c2;
    calculator c3;
    c1.setcomplex(4, 5);
    c2.setcomplex(7, 6);
    int r = c3.setrealdatabyadd(c1, c2);
    cout << r;
    return 0;
}