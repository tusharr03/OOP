#include<iostream>
using namespace std;

class Stdata{
    public:
    string geekname;
    void printname()
    {
        cout<<"Name is: "<<geekname;
    }
};

int main()
{
    string geeks;
    geeks obj1;

    obj1.geekname="Tushar";

    obj1.printname();
    return 0;
}