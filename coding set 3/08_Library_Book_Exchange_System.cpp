#include <iostream>
using namespace std;

class Book
{
public:
    int bookID;
    string title;
    int copies;

    void exchange(Book &other)
    {
        int tempID;
        string tempTitle;
        int tempCopies;

        tempID = bookID;
        bookID = other.bookID;
        other.bookID = tempID;

        tempTitle = title;
        title = other.title;
        other.title = tempTitle;

        tempCopies = copies;
        copies = other.copies;
        other.copies = tempCopies;
    }
};

Book moreCopies(Book b1, Book b2)
{
    if (b1.copies > b2.copies)
        return b1;
    else
        return b2;
}

int main()
{
    Book b1, b2;

    cout << "Enter first book ID: ";
    cin >> b1.bookID;

    cout << "Enter first book title: ";
    cin >> b1.title;

    cout << "Enter copies: ";
    cin >> b1.copies;

    cout << "\nEnter second book ID: ";
    cin >> b2.bookID;

    cout << "Enter second book title: ";
    cin >> b2.title;

    cout << "Enter copies: ";
    cin >> b2.copies;

    // Exchange books
    b1.exchange(b2);

    cout << "\nAfter Exchange:\n";

    cout << "Book 1: " << b1.bookID << " "
         << b1.title << " "
         << b1.copies << endl;

    cout << "Book 2: " << b2.bookID << " "
         << b2.title << " "
         << b2.copies << endl;

    Book result = moreCopies(b1, b2);

    cout << "\nBook with more copies:\n";
    cout << "ID = " << result.bookID << endl;
    cout << "Title = " << result.title << endl;
    cout << "Copies = " << result.copies;

    return 0;
}