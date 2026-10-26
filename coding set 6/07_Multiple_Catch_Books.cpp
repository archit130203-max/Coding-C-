#include <iostream>
using namespace std;

int main()
{
    int a, b;
    char op;

    cout << "Enter expression (e.g. 10 + 5): ";
    cin >> a >> op >> b;

    try
    {
        if (op == '+')
            cout << "Result = " << a + b;

        else if (op == '-')
            cout << "Result = " << a - b;

        else if (op == '*')
            cout << "Result = " << a * b;

        else if (op == '/')
        {
            if (b == 0)
                throw 1;

            cout << "Result = " << a / b;
        }
        else
            throw op;
    }
    catch (int x)
    {
        cout << "Division by Zero Error.";
    }
    catch (char x)
    {
        cout << "Invalid Operator.";
    }

    return 0;
}