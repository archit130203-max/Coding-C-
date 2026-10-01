#include <iostream>
using namespace std;

class Rectangle
{
public:
    int length;
    int width;
    
    bool equalArea(Rectangle r)
    {
        int area1 = length * width;
        int area2 = r.length * r.width;

        if (area1 == area2)
            return true;
        else
            return false;
    }
};

Rectangle mergeRectangle(Rectangle r1, Rectangle r2)
{
    Rectangle result;

    result.length = r1.length + r2.length;
    result.width = r1.width + r2.width;

    return result;
}

int main()
{
    Rectangle r1, r2, result;

    cout << "Enter first rectangle length: ";
    cin >> r1.length;

    cout << "Enter first rectangle width: ";
    cin >> r1.width;

    cout << "Enter second rectangle length: ";
    cin >> r2.length;

    cout << "Enter second rectangle width: ";
    cin >> r2.width;

    if (r1.equalArea(r2))
        cout << "\nBoth rectangles have equal area.\n";
    else
        cout << "\nBoth rectangles have different areas.\n";

    result = mergeRectangle(r1, r2);

    cout << "\nMerged Rectangle:\n";
    cout << "Length = " << result.length << endl;
    cout << "Width = " << result.width;

    return 0;
}