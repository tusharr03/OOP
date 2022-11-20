#include<iostream>
using namespace std;

class Animal
{
    public:
    void eat()
    {
        cout<<"Eating.."<<endl;
    }
};

class dog:public Animal
{
    public:
    void bark()
    {
        cout<<"Barking.."<<endl;
    }
};

class babydog:public dog
{
    public:
    void weep()
    {
        cout<<"Weeping.."<<endl;
    }
};

int main()
{
    babydog d1;
    d1.bark();
    d1.weep();
    d1.eat();
    return 0;
}