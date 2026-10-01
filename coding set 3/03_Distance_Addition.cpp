#include<iostream>
using namespace std;

class Distance
{
    private:
    int meters;
    int centimeters;

    public:
    Distance(int m, int cm)
    {
        meters = m;
        centimeters = cm;
    }

    Distance add(Distance d)
    {
        int totalMeters = meters + d.meters;
        int totalCentimeters = centimeters + d.centimeters;

        if (totalCentimeters >= 100)
        {
            totalMeters += totalCentimeters / 100;
            totalCentimeters %= 100;
        }

        return Distance(totalMeters, totalCentimeters);
    }

    void display()
    {
        cout << meters << " meters and " << centimeters << " centimeters" << endl;
    }
};

int main()
{
    Distance d1(5, 50);
    Distance d2(3, 25);
    Distance sum = d1.add(d2);

    cout << "Distance 1: ";
    d1.display();
    cout << "Distance 2: ";
    d2.display();
    cout << "Sum: ";
    sum.display();

    return 0;
}