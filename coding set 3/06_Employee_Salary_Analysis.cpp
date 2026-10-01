#include <iostream>
using namespace std;

class Employee
{
public:
    string name;
    double salary;
};

Employee highestSalary(Employee e[], int n)
{
    Employee highest = e[0];

    for (int i = 1; i < n; i++)
    {
        if (e[i].salary > highest.salary)
        {
            highest = e[i];
        }
    }

    return highest;
}

Employee increaseSalary(Employee e)
{
    e.salary = e.salary + (e.salary * 10 / 100);

    return e;
}

int main()
{
    Employee e[3];

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter employee " << i + 1 << " name: ";
        cin >> e[i].name;

        cout << "Enter salary: ";
        cin >> e[i].salary;
    }

    Employee highest = highestSalary(e, 3);

    cout << "\nHighest Salary Employee:\n";
    cout << "Name = " << highest.name << endl;
    cout << "Salary = " << highest.salary << endl;

    Employee revised = increaseSalary(e[0]);

    cout << "\nAfter 10% increment of first employee:\n";
    cout << "Name = " << revised.name << endl;
    cout << "Salary = " << revised.salary;

    return 0;
}