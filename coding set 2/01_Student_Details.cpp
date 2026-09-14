#include<iostream>
#include<string>
using namespace std;

class Student
{
    private:
    int rollno;
    string name;

    public:
    void setData(string r,int n)
    {
        name=r;
        rollno=n;
    }
    void displayData()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Roll no:"<<rollno<<endl;;
    }
};
int main()
{
    Student s;
    s.setData("Archit",22);
    s.displayData();

    return 0;
}