#include<iostream>
#include<string>
using namespace std;

class Book
{
    public:
    string title;
    string author;

    Book(string t,string a)
    {
        title=t;
        author=a;      
    }
    void display()
    {
        cout<<"Title: "<<title<<endl;
        cout<<"Author: "<<author<<endl;
    }

};
int main()
{
    Book b1("Talking to psychologists","John Smith");
    Book b2("The Psychology of Everyday Life","Jane Doe");
    b1.display();
    b2.display();
    return 0;
}