#include<iostream>
using namespace std;


    class complex{
    int real;
    int imag;
    public:
    complex(){
        cout<<"Enter the real and imaginary parts of the number";
        cin>>real>>imag;
    }
    complex( int a, int b){
        real=a;
        imag=b;
    }
    void getval(){
        cout<<"The complex number is "<<real<<"+"<<imag<<"i"<<endl;
    }
};
int main(){
    complex c1;
    complex c2(50,100);
    c1.getval();
    c2.getval();

    return 0;
}