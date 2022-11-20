#include<iostream>
using namespace std; 

class Shape
{
    public:
    int a;
    virtual void display()
    {
        cout<<"Drawing.."<<endl;
    }
};

class Rectangle:public Shape
{
    public:
    void display()
    {
        cout<<"Drawing Rectangle.."<<endl;
    }
};

class Circle:public Shape
{
    public:
    void display()
    {
        cout<<"Drawing circle.."<<endl;
    }
};

int main()
{
    Shape *s;
    Shape sh;
    Rectangle rec;
    Circle cir;
    s=&sh;
    s->display();
    s=&rec;
    s->display();
    s=&cir;
    s->display();
    return 0;
}