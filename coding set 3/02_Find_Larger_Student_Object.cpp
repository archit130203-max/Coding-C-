#include<iostream>
using namespace std;

class Student
{
    public:
    int rollno;
    float marks;

    
    Student(int r, float m)
    {
        rollno=r;
        marks=m;
    }
};
Student findtop(Student s1, Student s2)
{
    if (s1.marks > s2.marks)
        return s1;
       
    else 
        return s2;
}
int main()
{
    Student s1(101, 85.5), s2(102, 90.0);
    Student top=findtop(s1,s2);
    cout<<"Topper's Roll Number: "<<top.rollno<<endl;
    cout<<"Topper's Marks: "<<top.marks<<endl;
    return 0;
}