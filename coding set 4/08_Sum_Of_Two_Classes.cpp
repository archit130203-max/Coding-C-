#include <iostream>
using namespace std;

class B;   

class A
{
private:
    int a;

public:
    void getA()
    {
        cout << "Enter value of A: ";
        cin >> a;
    }

    friend void sum(A, B);
};

class B
{
private:
    int b;

public:
    void getB()
    {
        cout << "Enter value of B: ";
        cin >> b;
    }

    friend void sum(A, B);
};

void sum(A x, B y)
{
    cout << "Sum = " << x.a + y.b;
}

int main()
{
    A objA;
    B objB;

    objA.getA();
    objB.getB();

    sum(objA, objB);

    return 0;
}
