#include<iostream>
using namespace std;

struct employee
{
    int id;
    int salary;
    string name;

    employee(int i,int s,string n)
    {
        id=i;
        salary=s;
        name=n;
    }
    display()
    {
        cout<<id<<" "<<salary<<" "<<name<<endl;
    }
};

int main()
{
    employee e1(10,20000,"vicky");
    employee e2(11,21000,"daniel");
    employee e3(12,22000,"tom");
    e1.display();
    e2.display();
    e3.display();
    return 0;
}

