#include <iostream>
using namespace std;

class Account
{
protected:
    int accountNumber;
    float balance;

public:
    Account(int a, float b)
    {
        accountNumber = a;
        balance = b;
    }

    virtual void display()
    {
        cout << "Account Number = " << accountNumber << endl;
        cout << "Balance = " << balance << endl;
    }
};

class SavingsAccount : public Account
{
private:
    float interestRate;

public:
    SavingsAccount(int a, float b, float r)
        : Account(a, b)
    {
        interestRate = r;
    }

    void display() override
    {
        cout << "Savings Account" << endl;
        cout << "Account Number = " << accountNumber << endl;
        cout << "Balance = " << balance << endl;
        cout << "Interest Rate = " << interestRate << "%" << endl;
        cout << endl;
    }
};

class CurrentAccount : public Account
{
private:
    float overdraftLimit;

public:
    CurrentAccount(int a, float b, float o)
        : Account(a, b)
    {
        overdraftLimit = o;
    }

    void display() override
    {
        cout << "Current Account" << endl;
        cout << "Account Number = " << accountNumber << endl;
        cout << "Balance = " << balance << endl;
        cout << "Overdraft Limit = " << overdraftLimit << endl;
        cout << endl;
    }
};

int main()
{
    SavingsAccount s1(101, 50000, 5);
    SavingsAccount s2(102, 60000, 5);

    CurrentAccount c1(201, 80000, 20000);
    CurrentAccount c2(202, 90000, 25000);

    s1.display();
    s2.display();

    c1.display();
    c2.display();

    return 0;
}
