#include<iostream>
using namespace std;

class employee
{
    int id;
    int sal;
    public:
    employee()
    {
        cout<<"Default Constructor Invoked."<<endl;
    }
    employee(int i, int s){
        id=i;
        sal=s;
    }
};

int main(void)
{
    employee e1;
    employee e2;
    return 0;
}