#include <iostream>
#include <string>
using namespace std;

class Library
{
public:
    string title;
    string author;
    int price;

    // Constructor
    Library()
    {
        title = "";
        author = "";
        price = 0;
    }
};

int main()
{
    Library book[10];
    string searchTitle;
    bool found = false;

    // Input details of 10 books
    cout << "Enter details of 10 books:\n\n";

    for (int i = 0; i < 10; i++)
    {
        cout << "Book " << i + 1 << endl;

        cout << "Enter Title: ";
        getline(cin, book[i].title);

        cout << "Enter Author: ";
        getline(cin, book[i].author);

        cout << "Enter Price: ";
        cin >> book[i].price;
        cin.ignore();

        cout << endl;
    }

    // Search book by title
    cout << "Enter book title to search: ";
    getline(cin, searchTitle);

    cout << "\nSearch Result:\n";

    for (int i = 0; i < 10; i++)
    {
        if (book[i].title == searchTitle)
        {
            cout << "\nBook Found!\n";
            cout << "Title  : " << book[i].title << endl;
            cout << "Author : " << book[i].author << endl;
            cout << "Price  : " << book[i].price << endl;
            found = true;
        }
    }

    if (!found)
    {
        cout << "Book not found.";
    }

    return 0;
}