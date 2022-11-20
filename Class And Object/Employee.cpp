#include<iostream>
#include<string>
using namespace std;

class employee
{
    public:
    int id;
    string name;

    void insert(int i,string s)
    {
    cout<<"Id and Name of the employee are: "<<endl;
    id=i;
    name=s;
    }
    void display()
    {
        cout<<id<<" "<<name<<endl;
    }
};

int main(void)
{
    employee e1;
    employee e2;
    
    e1.insert(33 , "vicky");
    e1.display();
    e2.insert(45 , "ronny");
    e2.display();
    return 0;

}




