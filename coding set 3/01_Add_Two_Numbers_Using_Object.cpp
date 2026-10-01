#include<iostream>
using namespace std;

class Number
{
    public:
    int value;

    void accept()
    {
        cout<<"Enter a number:",
        cin>>value;
    }
    void display()
    {
        cout<<value<<endl;
    }
};
Number add(Number n1, Number n2)
{
    Number temp;
    temp.value=n1.value+n2.value;
    return temp;
}
int main()
{
    Number num1,num2,sum;
    num1.accept();
    num2.accept();

    sum=add(num1,num2);
    cout<<"Sum of two numbers is: ";
    sum.display();
    return 0;
}