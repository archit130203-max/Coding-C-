#include <iostream>
using namespace std;

class Distance
{
public:
    int feet;
    int inches;

    Distance operator+(Distance d)
    {
        Distance result;

        result.feet = feet + d.feet;
        result.inches = inches + d.inches;

        if (result.inches >= 12)
        {
            result.feet = result.feet + result.inches / 12;
            result.inches = result.inches % 12;
        }

        return result;
    }
};

int main()
{
    Distance d1, d2, d3;

    d1.feet = 5;
    d1.inches = 10;

    d2.feet = 3;
    d2.inches = 8;

    d3 = d1 + d2;

    cout << "Total Distance = "
         << d3.feet << " feet "
         << d3.inches << " inches";

    return 0;
}
