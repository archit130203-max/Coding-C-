#include<iostream>
using namespace std;

class Number
{
    private:
    int num;

    public:
    void input()
    {
        cout<<"Enter a number: ";
        cin>>num;
    }
    bool isEven()
    {
        if(num%2==0)
        {
            return true;

        }
        else
        {
            return false;
        }
    }
    void displayResult()
    {
        if(isEven())
        {
            cout<<num<<" is an even number."<<endl;
        }
        else
        {
            cout<<num<<" is an odd number."<<endl;
             
        }
    }
};
int main()
{
    Number n;
    n.input();
    n.displayResult();
    return 0;
}