#include <iostream>
using namespace std;

class Maximum
{
public:

    
    void max(int a, int b)
    {
        if (a > b)
            cout << "Max of " << a << " and " << b << " = " << a << endl;
        else
            cout << "Max of " << a << " and " << b << " = " << b << endl;
    }

    // Maximum of three integers
    void max(int a, int b, int c)
    {
        if (a >= b && a >= c)
            cout << "Max of " << a << ", " << b << " and " << c << " = " << a << endl;
        else if (b >= a && b >= c)
            cout << "Max of " << a << ", " << b << " and " << c << " = " << b << endl;
        else
            cout << "Max of " << a << ", " << b << " and " << c << " = " << c << endl;
    }

    
    void max(float a, float b)
    {
        if (a > b)
            cout << "Max of " << a << " and " << b << " = " << a << endl;
        else
            cout << "Max of " << a << " and " << b << " = " << b << endl;
    }
};

int main()
{
    Maximum m;

    m.max(10, 20);
    m.max(5, 8, 3);
    m.max(3.2f, 4.5f);

    return 0;
}
