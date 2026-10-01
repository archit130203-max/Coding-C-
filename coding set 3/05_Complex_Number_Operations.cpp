#include<iostream>
using namespace std;

class Complex
{
public:
    int real,imag;

    void add(Complex c)
    {
        cout<<"Addition = "<<real+c.real<<" + "<<imag+c.imag<<"i"<<endl;
    }

    Complex multiply(Complex c)
    {
        Complex ans;

        ans.real=(real*c.real)-(imag*c.imag);
        ans.imag=(real*c.imag)+(imag*c.real);

        return ans;
    }
};

Complex subtract(Complex a,Complex b)
{
    Complex temp;

    temp.real=a.real-b.real;
    temp.imag=a.imag-b.imag;

    return temp;
}

int main()
{
    Complex c1,c2,mul,sub;

    cout<<"Enter first complex number: ";
    cin>>c1.real>>c1.imag;

    cout<<"Enter second complex number: ";
    cin>>c2.real>>c2.imag;

    c1.add(c2);

    sub=subtract(c1,c2);

    cout<<"Subtraction = "<<sub.real<<" + "<<sub.imag<<"i"<<endl;

    mul=c1.multiply(c2);

    cout<<"Multiplication = "<<mul.real<<" + "<<mul.imag<<"i";

    return 0;
}