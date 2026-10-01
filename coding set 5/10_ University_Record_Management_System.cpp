#include <iostream>
#include <string>
using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    Person()
    {
        name = "";
        age = 0;
    }

    Person(string n, int a)
    {
        name = n;
        age = a;
    }
};

class Teacher : public Person
{
private:
    string subject;
    float salary;

public:
    Teacher()
        : Person()
    {
        subject = "";
        salary = 0;
    }

    Teacher(string n, int a, string s, float sal)
        : Person(n, a)
    {
        subject = s;
        salary = sal;
    }

    void display()
    {
        cout << "Teacher Details" << endl;
        cout << "Name = " << name << endl;
        cout << "Age = " << age << endl;
        cout << "Subject = " << subject << endl;
        cout << "Salary = " << salary << endl;
        cout << endl;
    }
};

class ResearchScholar : public Person
{
private:
    string researchArea;
    string university;

public:
    ResearchScholar()
        : Person()
    {
        researchArea = "";
        university = "";
    }

    ResearchScholar(string n, int a, string r, string u)
        : Person(n, a)
    {
        researchArea = r;
        university = u;
    }

    void display()
    {
        cout << "Research Scholar Details" << endl;
        cout << "Name = " << name << endl;
        cout << "Age = " << age << endl;
        cout << "Research Area = " << researchArea << endl;
        cout << "University = " << university << endl;
        cout << endl;
    }
};

template <class T>
class RecordManager
{
private:
    T records[10];
    int count;

public:
    RecordManager()
    {
        count = 0;
    }

    void addRecord(T record)
    {
        if (count < 10)
        {
            records[count] = record;
            count++;
        }
    }

    void displayRecords()
    {
        for (int i = 0; i < count; i++)
        {
            records[i].display();
        }
    }
};

int main()
{
    RecordManager<Teacher> teacherManager;

    Teacher t1("Rahul", 35, "Computer Science", 50000);
    Teacher t2("Priya", 40, "Mathematics", 55000);

    teacherManager.addRecord(t1);
    teacherManager.addRecord(t2);

    cout << "===== TEACHER RECORDS =====" << endl;
    teacherManager.displayRecords();

    RecordManager<ResearchScholar> scholarManager;

    ResearchScholar r1(
        "Aman",
        25,
        "Artificial Intelligence",
        "GCET Jammu"
    );

    ResearchScholar r2(
        "Neha",
        27,
        "Machine Learning",
        "University of Jammu"
    );

    scholarManager.addRecord(r1);
    scholarManager.addRecord(r2);

    cout << "===== RESEARCH SCHOLAR RECORDS =====" << endl;
    scholarManager.displayRecords();

    return 0;
}