#include<iostream>
using namespace std;


class complx
{
    public:
    int x;
    int y;

    num(int a,int b)
    {
        x=a;
        y=b;
    }
}

void operator++ ()
{
    
}


void num :: operator++(int x,int y)
{
    ++x;
    ++y;
}

int main()
{
    num X(4,7)
    return 0;
}