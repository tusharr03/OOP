#include<iostream>
using namespace std;

class Address
{
    public:
    string addressline,city,state;
    Address(string addressline,string city,string state)
    {
        this->addressline=addressline;
        this->city=city;
        this->state=state;
    }
};

class Employee
{
    private:
    Address* address;
    public:
    int id;
    string name;
    Employee(int id,string name,Address* address)
    {
        this->id=id;
        this->address=address;
        this->name=name;   
    }
    void display()
    {
        cout<<id<<" "<<name<<" "<<address->addressline<<" "<<address->city<<" "<<address->state<<endl;
    }
};

int main()
{
    Address a1=Address("7,Adan Bagh","Agra","Uttar Pradesh");
    Employee e1=Employee(33,"Tushar",&a1);
    e1.display();
    return 0;
}
