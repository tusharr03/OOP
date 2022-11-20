#include<iostream>
using namespace std;

class complex{
    public:
    int real,imag = 0;

    complex(int a,int b)
    {
        real=a;
        imag=b;
    }
    complex operator + (complex x)
    {
        complex temp(0,0);
        temp.real=real+x.real;
        temp.imag=imag+x.imag;
        return temp;
    }
    complex operator ++(int z)
    {
        real=real + 1;
        imag=imag+1;
    }
};

int main()
{
    complex c1(5,6),c2(6,7);
    complex c3=c1+c2;
    complex c4= c1++ + c2++;
    cout<<"simple addition of c1 and c2 gives: "<<c4.real<<"+ i"<<c4.imag;
}