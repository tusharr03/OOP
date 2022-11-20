#include<iostream>
using namespace std;

class complex{
    int real;
    int imaginary;
    public:
    void getdata();
    void display();
}

void complex :: getdata()
{
    cout<<"Enter the real part of the complex number: "<<endl;
    cin>>real;

    cout<<"Enter the imaginary part of the complex number:  "<<endl;
    cin>>imaginary;

}

void display()
{
    
    cout<<"The complex number is"<<real<<imaginary<<"i";
}