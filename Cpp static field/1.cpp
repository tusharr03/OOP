#include<iostream>
using namespace std;

class employee
{
    public:
    int id;
    int salary;
    string name;
    static float bonus;
    employee(int i,int s,string n)
    {
        this->id=i;
        this->salary=s;
        this->name=n;
    }
    display()
    {
        cout<<id<<" "<<salary<<" "<<name<<" "<<bonus<<endl;
    }

};

float employee::bonus=5000;

int main()
{
    employee e1(21,30000,"ronny");
    employee e2(22,40000,"vicky");
    e1.display();
    e2.display();

}

