#include<iostream>
#include<string>
using namespace std;

class Employee
{
    private:
    string name;
    double basicsalary;

    public:
    Employee(string n,double b)
    {
        name=n;
        basicsalary=b;
    }
    double calculateSalary()
    {
        double hra=0.20*basicsalary;
        double da=0.10*basicsalary;
        double grosssalary=basicsalary+hra+da;
        return grosssalary;
    }
    void displaygrosssalary()
    {
        cout<<"Employee Name: "<<name<<endl;
        cout<<"Basic Salary: "<<basicsalary<<endl;
        cout<<"HRA: "<<0.20*basicsalary<<endl;
        cout<<"DA: "<<0.10*basicsalary<<endl;
        cout<<"Gross Salary: "<<calculateSalary()<<endl;    
    }
};
int main()
{
    string empname;
    double salary;
    cout<<"Enter Employee Name: ";
    getline(cin,empname);
    cout<<"Enter Basic Salary: ";
    cin>>salary;
    Employee e(empname,salary);
    e.displaygrosssalary();
    return 0;
}    