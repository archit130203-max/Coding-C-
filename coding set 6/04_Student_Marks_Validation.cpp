#include <iostream>
using namespace std;

int main()
{
    int marks;

    cout << "Enter marks: ";
    cin >> marks;

    try
    {
        if (marks < 0 || marks > 100)
        {
            throw marks;
        }

        cout << "Valid Marks";
    }
    catch (int x)
    {
        cout << "Invalid Marks! Marks should be between 0 and 100.";
    }

    return 0;
}