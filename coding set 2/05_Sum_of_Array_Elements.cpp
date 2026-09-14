#include<iostream>
using namespace std;

class ArraySum
{
    private:
    int arr[10];

    public:
    ArraySum()
    {
        cout<<"Enter 10 elements of the array:"<<endl;
        for(int i=0;i<10;i++)
        {
            cin>>arr[i];
        }
    }
    void findSum()
    {
        int total=0;
        for(int i=0;i<10;i++)
        {
            total+=arr[i];
        }
        cout<<"Sum of array elements: "<<total<<endl;
    }
};
int main()
{
    ArraySum a;
    a.findSum();
    return 0;
}