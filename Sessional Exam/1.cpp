#include<iostream>
using namespace std;

class variable
{
int a;
float b;
double c;
public:

variable(int a,float b,double c)
{
this->a=a;
this->b=b;
this->c=c;
}

int operator *(variable v2)
{
return (a*v2.a);
}


int operator /(variable v2)
{
return (a/v2.a);
}

float operator *(variable v2)
{
return (b*v2.b);
}


float operator /(variable v2)
{
return (b/v2.b);
}

double operator *(variable v2)
{
return (c*v2.c);
}


double operator /(variable v2)
{
return (c/v2.c);
}

};

int main()
{
int a,b;
float c,d;
double e,f;

cout<<"Enter the value of a and b of type int: "<<endl;
cin>>a>>b;

cout<<"Enter the value of c and d of type float: "<<endl;
cin>>c>>d;

cout<<"Enter the value of e and f of type double: "<<endl;
cin>>e>>f;

variable v1(a,c,e);
variable v2(b,d,f);

cout<<"Multiplication of int variables is: "<<v1*v2<<endl;
cout<<"Division of int variables is: "<<v1/v2<<endl;

cout<<"Multiplication of float variables is: "<<v1*v2<<endl;
cout<<"Division of float variables is: "<<v1/v2<<endl;

cout<<"Multiplication of double variables is: "<<v1*v2<<endl;
cout<<"Division of double variables is: "<<v1/v2<<endl;

return 0;
}