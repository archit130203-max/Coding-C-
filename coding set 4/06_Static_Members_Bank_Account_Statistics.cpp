
#include <iostream>
using namespace std;

class BankAccount
{
public:
    int accountNumber;
    string customerName;

    static int totalAccounts;

    BankAccount()
    {
        totalAccounts++;
    }

    static void displayTotalAccounts()
    {
        cout << "Total Accounts = " << totalAccounts << endl;
    }
};

int BankAccount::totalAccounts = 0;

int main()
{
    BankAccount b1, b2, b3;

    cout << "Enter account number for first account: ";
    cin >> b1.accountNumber;

    cout << "Enter customer name: ";
    cin >> b1.customerName;

    cout << "\nEnter account number for second account: ";
    cin >> b2.accountNumber;

    cout << "Enter customer name: ";
    cin >> b2.customerName;

    cout << "\nEnter account number for third account: ";
    cin >> b3.accountNumber;

    cout << "Enter customer name: ";
    cin >> b3.customerName;

    BankAccount::displayTotalAccounts();

    return 0;
}
