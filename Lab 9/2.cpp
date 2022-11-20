//write a program to throw and handle division by zero exception.

#include<iostream>
using namespace std;

int main()
{
    float a,b;
    cout<<"Enter two integers: "<<endl;
    cin>>a>>b;

    try
    {
        if(b==0)
        {
            throw b;            
        }
        else
        {
            cout<<(a/b);
        }
    }
    catch(float)
    {
        cout<<"Value cannot be zero"<<endl;      
    }
    return 0;
  }