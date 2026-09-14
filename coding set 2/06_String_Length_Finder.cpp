#include<iostream>
#include<string>
using namespace std;

class Text
{
    private:
    string str;

    public:
    Text(string s)
    {
        str=s;
    
    }
    int getLength()
    {
        int count=0;
        for(char c:str)
        {
            count++;
        }
        return count;
    }
};
int main()
{
    string input;
    cout<<"Enter a string: ";
    getline(cin,input);
    Text t(input);
    cout<<"Length of the string: "<<t.getLength()<<endl;
    return 0;
}    