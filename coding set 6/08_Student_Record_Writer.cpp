#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int roll, marks;
    string name;

    ofstream file("students.txt");

    cout << "Enter Roll Number: ";
    cin >> roll;

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Marks: ";
    cin >> marks;

    file << roll << " " << name << " " << marks << endl;

    file.close();

    cout << "Student record saved successfully.";

    return 0;
}