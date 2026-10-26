#include <iostream>
using namespace std;

class BankAccount
{
    int balance;

public:
    BankAccount(int b)
    {
        balance = b;
    }

    void withdraw(int amount)
    {
        try
        {
            if (amount > balance)
            {
                throw amount;
            }

            balance = balance - amount;
            cout << "Withdrawal successful." << endl;
            cout << "Remaining balance = " << balance;
        }
        catch (int x)
        {
            cout << "Error: Insufficient balance.";
        }
    }
};

int main()
{
    int balance, amount;

    cout << "Enter balance: ";
    cin >> balance;

    BankAccount b(balance);

    cout << "Enter withdrawal amount: ";
    cin >> amount;

    b.withdraw(amount);

    return 0;
}