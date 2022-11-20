#include<iostream>
using namespace std;
class account
{
public:
    int account;
    int balance;

    void input()
    {
        cout<<"Enter Account number, Balance:";
        cin>>account>>balance;
    }
    virtual void showbalance(){};
};
class saving:public account
{
    int min_bal;

public:
    saving()
    {
        min_bal = 1000;
        input();
    }
    void deposit()
    {
        int d;
        cout<<"Enter the amount you want to deposit:";
        cin>>d;
        balance += d;
    }
    void withdraw()
    {
        int d;
        cout<<"Enter the amount you want to withdraw:";
        cin>>d;
        if (balance - d < min_bal)
        {
            cout<<"You can only withdraw: "<< balance - d <<endl;
            char ch;
            cout<<"Confirm your transaction Y/N:";
            cin>>ch;
            if (ch == 'Y')
            {
                cout<<"Withdrawl Done :)"<<endl;
                balance -= d;
            }
            else
            {
                cout<<"Request Denied"<<endl;
            }
        }
        else
        {
            balance -= d;
        }
    }
    void showbalance()
    {
        cout<<"Current balance :"<< balance<<endl;
    }
};
class current:public account
{
    int overdue;

public:
    current()
    {
        overdue = 5000;
        input();
    }
    void deposit()
    {
        int d;
        cout<<"Enter the amount you want to deposit:";
        cin>>d;
        if (overdue > d)
        {
            overdue -= d;
        }
        else
        {
            d -= overdue;
            overdue = 0;
            balance += d;
        }
    }
    void withdraw()
    {
        int d;
        cout<<"Enter the amount you want to withdraw:";
        cin>>d;
        if (overdue != 0)
        {
            cout<< "Can't Withdraw :"<< endl;
        }
        else
        {
            if (balance - d > 0)
            {
                balance -= d;
            }
            else
            {
                cout<< "You can withdraw only:"<< balance <<endl;
            }
            char ch;
            cout << "Confirm your transaction (Y/N:";
            cin>>ch;
            if (ch == 'Y')
            {
                cout << "Withdrawl Done :)" << endl;
            }
            else
            {
                cout << "Request Denied" << endl;
            }
        }
    }
    void showbalance()
    {
        cout << "Current balance:" << balance << endl;
    }
};
int main()
{
    account *p[2];
    saving s;
    s.deposit();
    s.withdraw();
    p[0] = &s;
    p[0]->showbalance();
    current c;
    c.deposit();
    c.withdraw();
    p[1] = &c;
    p[1]->showbalance();

    return 0;
}