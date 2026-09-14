#include<iostream>
using namespace std;

class Rectangle
{
    private:
    double length;
    double width;

    public:
    void input()
    {
        cout<<"Enter Length:";
        cin>>length;
        cout<<"Enter Width:";
        cin>>width;
    }
    void area()
    {double area=length*width;
        cout<<"Area of Rectangle: "<<area<<endl;
    }
    void displayarea()
    {
        cout<<"Length: "<<length<<endl;
        cout<<"Width: "<<width<<endl;
    }    
};
int main()
{
    Rectangle r;
    r.input();
    r.displayarea();
    r.area();
    return 0;
}