#include <iostream>
#include <string>
using namespace std;

class Student
{
    private:
    string name;
    int rollNumber;
    float marks[5];

    public:
    Student()
    {
        cout<<"Enter Student Name: ";
        getline(cin, name);
        cout<<"Enter Roll Number: ";
        cin>>rollNumber;
        cout<<"Enter Marks for 5 Subjects: ";
        for(int i=0; i<5; i++)
        {
            cin>>marks[i];
        }
    }
    float calculateTotalMarks()
    {
        float total=0;
        for(int i=0; i<5; i++)
        {
            total+=marks[i];
        }
        return total;
    }
    float calculatePercentage()
    {
        float total=calculateTotalMarks();
        return (total/500)*100;
    }
    char calculateGrade()
    {
        float percentage=calculatePercentage();
        if(percentage>=90)
            return 'A';
        else if(percentage>=80)
            return 'B';
        else if(percentage>=70)
            return 'C';
        else if(percentage>=60)
            return 'D';
        else
            return 'F';
    }
    void displayResult()
    {
        cout<<"Student Name: "<<name<<endl;
        cout<<"Roll Number: "<<rollNumber<<endl;
        cout<<"Total Marks: "<<calculateTotalMarks()<<endl;
        cout<<"Percentage: "<<calculatePercentage()<<"%"<<endl;
        cout<<"Grade: "<<calculateGrade()<<endl;
    }
};
int main()
{
    Student student;
    student.displayResult();
    return 0;
}