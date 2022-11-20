#include<iostream>
using namespace std;

class Shape
{
    public:
    int a;
    int b;
    void get_data(int m,int n)
    {
        a=m;
        b=n;
    }
};

class rectangle:public Shape
{
    public:
    int rec_area()
    {
        int result=a*b;
        return result;
    }
};

class triangle:public Shape
{
    public:
    int tri_area()
    {
        int result=0.5*a*b;
        return result;
    }
};

int main()
{
    rectangle r;
    triangle t;
    int length,breadth,base,height;
    cout<<"Enter length and breadth of rectangle:"<<endl;
    cin>>length>>breadth;
    r.get_data(length,breadth);
    int x=r.rec_area();
    cout<<"Area of rectangle is:"<<x<<endl;
    cout<<"Enter the base and height of triangle:"<<endl;
    cin>>base>>height;
    t.get_data(base,height);
    int y=t.tri_area();
    cout<<"Area of triangle is:"<<y<<endl;
    return 0;
}