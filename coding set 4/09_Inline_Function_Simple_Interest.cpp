#include <iostream>
using namespace std;

class Interest
{
public:

    inline float calculateSI(float P, float R, float T)
    {
        return (P * R * T) / 100;
    }
};

int main()
{
    Interest obj;

    float P, R, T, SI;

    cout << "Enter Principal: ";
    cin >> P;

    cout << "Enter Rate: ";
    cin >> R;

    cout << "Enter Time: ";
    cin >> T;

    SI = obj.calculateSI(P, R, T);

    cout << "Simple Interest = " << SI;

    return 0;
}
