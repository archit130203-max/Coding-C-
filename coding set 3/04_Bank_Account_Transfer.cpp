#include <iostream>
using namespace std;

class BankAccount
{
public:
    int account;
    double balance;

    void transfer(BankAccount &receiver,double amount)
    {
        if(balance>=amount)
        {
            balance-=amount;
            receiver.balance+=amount;
            cout<<"Transfer Successful"<<endl;
        }
        else
        {
            cout<<"Not Enough Balance"<<endl;
        }
    }
};

int main()
{
    BankAccount a,b;

    cout<<"Enter Sender Account Number: ";
    cin>>a.account;

    cout<<"Enter Sender Balance: ";
    cin>>a.balance;

    cout<<"Enter Receiver Account Number: ";
    cin>>b.account;

    cout<<"Enter Receiver Balance: ";
    cin>>b.balance;

    double money;
    cout<<"Enter Amount to Transfer: ";
    cin>>money;

    a.transfer(b,money);

    cout<<"Sender Balance: "<<a.balance<<endl;
    cout<<"Receiver Balance: "<<b.balance;

    return 0;
}