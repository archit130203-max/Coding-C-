#include <iostream>
using namespace std;

class AgeException
{
};

int main()
{
    int age;

    cout << "Enter age: ";
    cin >> age;

    try
    {
        if (age < 18)
        {
            throw AgeException();
        }

        cout << "Eligible to vote.";
    }
    catch (AgeException)
    {
        cout << "Not eligible to vote.";
    }

    return 0;
}