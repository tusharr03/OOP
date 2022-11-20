#include<iostream>
using namespace std;

class employee
{
    public:
    int id;
    int salary;
    string name;
    static int count;
    employee(int i,int s,string n)
    {
        this->id=i;
        this->salary=s;
        this->name=n;
        count++;
    }
    display()
    {
        cout<<id<<" "<<salary<<" "<<name<<endl;
    }

};

int employee::count=0;

int main()
{
    employee e1(21,30000,"ronny");
    employee e2(22,40000,"vicky");
    employee e3(23,44000,"daniel");
    e1.display();
    e2.display();
    e3.display();
    cout<<endl<<"Total Objects :"<<employee::count;
    return 0;
}

