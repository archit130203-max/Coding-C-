#include <iostream>
using namespace std;

class Book
{
protected:
    string title;
    string author;

public:
    Book(string t, string a)
    {
        title = t;
        author = a;
    }
};

class EBook : public Book
{
private:
    float fileSize;
    string fileFormat;

public:
    EBook(string t, string a, float size, string format)
        : Book(t, a)
    {
        fileSize = size;
        fileFormat = format;
    }

    void display()
    {
        cout << "Title = " << title << endl;
        cout << "Author = " << author << endl;
        cout << "File Size = " << fileSize << " MB" << endl;
        cout << "File Format = " << fileFormat << endl;
        cout << endl;
    }
};

int main()
{
    EBook books[3] =
    {
        EBook("C++ Programming", "Bjarne Stroustrup", 5.5, "PDF"),
        EBook("Java Basics", "James Gosling", 4.2, "EPUB"),
        EBook("Python Guide", "Guido van Rossum", 6.1, "PDF")
    };

    for(int i = 0; i < 3; i++)
    {
        books[i].display();
    }

    return 0;
}

