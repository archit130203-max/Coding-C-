#include <iostream>
using namespace std;

class Complex
{
public:
    int real;
    int imag;

    Complex operator+(Complex c)
    {
        Complex result;

        result.real = real + c.real;
        result.imag = imag + c.imag;

        return result;
    }
};

int main()
{
    Complex c1, c2, c3;

    c1.real = 3;
    c1.imag = 4;

    c2.real = 2;
    c2.imag = 5;

    c3 = c1 + c2;

    cout << "Result = " << c3.real << " + "
         << c3.imag << "i";

    return 0;
}
