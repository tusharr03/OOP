#include<iostream>
using namespace std;

class A
{
    int a=5;
    int b=7;
    public:
    int mul()
    {
        int c;
        c=a*b;
        return c;
    }
};
class B:private A
{
    public:
    void display()
    {
        int result;
        result=mul();
        cout<<"Result is:"<<result<<endl;
    }
};

int main()
{
    B b;
    b.display();
    return 0;
}