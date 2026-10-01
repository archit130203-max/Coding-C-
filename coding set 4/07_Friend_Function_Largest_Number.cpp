#include <iostream>
using namespace std;

class Number
{
private:
    int a;
    int b;

public:
    void getData()
    {
        cout << "Enter first number: ";
        cin >> a;

        cout << "Enter second number: ";
        cin >> b;
    }

    friend void findLargest(Number n);
};

void findLargest(Number n)
{
    if (n.a > n.b)
        cout << "Largest = " << n.a;
    else
        cout << "Largest = " << n.b;
}

int main()
{
    Number n;

    n.getData();

    findLargest(n);

    return 0;
}
