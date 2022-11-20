#include<iostream>
using namespace std;

class employee
{
    public:
    int id;
    string name;

};

int main()
{
    employee e1;
    employee e2;
    e1.id=23;
    e1.name="vicky";
    e2.id=45;
    e2.name="Ronny";
    cout<<e1.name<<" "<<e1.id<<endl;
    cout<<e2.name<<" "<<e2.id<<endl;
    return 0;
}
