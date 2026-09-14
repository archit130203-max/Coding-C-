#include<iostream>
using namespace std;

class Marks
{
    private:
    int marks[5];

    public:
    Marks()
    {
        cout<<"Enter marks of 5 subjects:"<<endl;
        for(int i=0;i<5;i++)
        {
            cin>>marks[i];
        }
    }
    void findHighest()
    {
        int highest=marks[0];
        for(int i=1;i<5;i++)
        {
            if(marks[i]>highest)
            {
                highest=marks[i];
            }
        }
        cout<<"Highest marks: "<<highest<<endl;
    }
};
int main()
{
    Marks m;
    m.findHighest();
    return 0;
}