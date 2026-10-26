#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream file("article.txt");

    char ch;
    int characters = 0, words = 0, lines = 0;
    string word;

    if (!file)
    {
        cout << "File not found.";
        return 0;
    }

    while (file.get(ch))
    {
        characters++;

        if (ch == '\n')
            lines++;
    }

    file.clear();
    file.seekg(0);

    while (file >> word)
    {
        words++;
    }

    file.clear();
    file.seekg(0, ios::end);

    if (file.tellg() > 0)
    {
        file.seekg(-1, ios::end);
        char last;
        file.get(last);

        file.clear();
        file.seekg(0);

        if (last != '\n')
            lines++;
    }

    file.close();

    cout << "Characters: " << characters << endl;
    cout << "Words: " << words << endl;
    cout << "Lines: " << lines << endl;

    return 0;
}