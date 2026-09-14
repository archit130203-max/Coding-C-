#include<iostream>
using namespace std;

class BankAccount
{
    private:
    string accountNumber;
    double balance;

    public:
    BankAccount(string accNumber,double initialBalance)
    {
        accountNumber=accNumber;
        balance=initialBalance;
    }
    void deposit(double amount)
    {
        balance+=amount;
        cout<<"Deposited: "<<amount<<endl;
    }
    void withdraw(double amount)
    {
        if(amount<=balance)
        {
            balance-=amount;
            cout<<"Withdrawn: "<<amount<<endl;
        }
        else
        {
            cout<<"Insufficient balance!"<<endl;
        }
    }
    void displayBalance()
    {
        cout<<"Account Number: "<<accountNumber<<endl;
        cout<<"Current Balance: "<<balance<<endl;
    }
};
int main()
{
    string accNumber;
    double initialBalance;
    cout<<"Enter Account Number: ";
    cin>>accNumber;
    cout<<"Enter Initial Balance: ";
    cin>>initialBalance;

    BankAccount account(accNumber,initialBalance);
    account.displayBalance();

    double depositAmount;
    cout<<"Enter amount to deposit: ";
    cin>>depositAmount;
    account.deposit(depositAmount);
    account.displayBalance();

    double withdrawAmount;
    cout<<"Enter amount to withdraw: ";
    cin>>withdrawAmount;
    account.withdraw(withdrawAmount);
    account.displayBalance();

    return 0;
}