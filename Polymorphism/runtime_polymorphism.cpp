#include<iostream>
using namespace std;

class animal
{
    public:
    void eat()
    {
    cout<<"Eating.."<<endl;
    }
};

class dog:public animal
{
    public:
    void eat()
    {
        cout<<"eating bread.."<<endl;
    }
};

int main()
{
    dog d1;
    d1.eat();
    return 0;
}