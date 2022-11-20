#include<iostream>
using namespace std;

class employee
{
    int id;
    int sal;
    string name;
    public:
    employee()
    {
        cout<<"Default Constructor Invoked."<<endl;
    }
    employee(int i, int s,string n){
        id=i;
        sal=s;
        name=n;
    }
    display()
    {
        cout<<id<<" "<<sal<<" "<<name<<endl;
    }
};

int main(void)
{
    employee e1=employee(23,40000,"Tushar");
    employee e2=employee(45,60000,"Vicky");
    e1.display();
    e2.display();
    return 0;
}