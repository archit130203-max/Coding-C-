#include <iostream>
using namespace std;

class Result
{
public:
    int rollNo;
    int marks[5];

    int total()
    {
        int sum = 0;

        for (int i = 0; i < 5; i++)
        {
            sum = sum + marks[i];
        }

        return sum;
    }

    
    void compare(Result r)
    {
        if (total() > r.total())
            cout << "This student has higher marks.\n";
        else if (total() < r.total())
            cout << "Other student has higher marks.\n";
        else
            cout << "Both students have equal marks.\n";
    }
};


Result topper(Result r1, Result r2, Result r3)
{
    Result top = r1;

    if (r2.total() > top.total())
        top = r2;

    if (r3.total() > top.total())
        top = r3;

    return top;
}
// Apply grace marks
Result graceMarks(Result r)
{
    int totalGrace = 0;

    for (int i = 0; i < 5; i++)
    {
        
        int grace = 5;

        
        if (totalGrace + grace > 20)
        {
            grace = 20 - totalGrace;
        }

        r.marks[i] = r.marks[i] + grace;
        totalGrace = totalGrace + grace;
    }

    return r;
}

int main()
{
    Result r1, r2, r3;

    cout << "Enter Roll Number of student 1: ";
    cin >> r1.rollNo;

    cout << "Enter marks of 5 subjects:\n";
    for (int i = 0; i < 5; i++)
        cin >> r1.marks[i];

    cout << "\nEnter Roll Number of student 2: ";
    cin >> r2.rollNo;

    cout << "Enter marks of 5 subjects:\n";
    for (int i = 0; i < 5; i++)
        cin >> r2.marks[i];

    cout << "\nEnter Roll Number of student 3: ";
    cin >> r3.rollNo;

    cout << "Enter marks of 5 subjects:\n";
    for (int i = 0; i < 5; i++)
        cin >> r3.marks[i];

    cout << "\nComparison:\n";
    r1.compare(r2);

    Result top = topper(r1, r2, r3);

    cout << "\nTopper:\n";
    cout << "Roll Number = " << top.rollNo << endl;
    cout << "Total Marks = " << top.total() << endl;

    Result revised = graceMarks(r1);

    cout << "\nAfter Grace Marks:\n";
    cout << "Roll Number = " << revised.rollNo << endl;
    cout << "New Marks:\n";

    for (int i = 0; i < 5; i++)
    {
        cout << revised.marks[i] << " ";
    }

    cout << "\nNew Total = " << revised.total();

    return 0;
}