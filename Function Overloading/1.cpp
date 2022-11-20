#include<iostream>
using namespace std;

class cal
{
    public:
    int add(int a,int b)
    {
        return a+b;
    }
    int add(int a,int b,int c)
    {
        return a+b+c;
    }
};

int main()
{
    cal c;
    cout<<c.add(5,6)<<endl;
    cout<<c.add(5,6,7)<<endl;
    return 0;
}



















