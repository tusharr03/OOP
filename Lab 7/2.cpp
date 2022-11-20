#include<iostream>
using namespace std;

class person
{
char name[80];
int marks[6];
int rollno;
public:
void getdata(void);
void display(void);
};


void person::getdata(void) 
{
cout<<"enter name";
cin>>name;
cout<<"enter marks";
cin>>marks;
cout<<"enter rollno";
cin>>rollno;
}

void person::display(void)
{
    
cout<<"\n name:"<<name;
cout<<"\n marks:"<<marks;
cout<<"\n rollno:"<<rollno;
}

int main()
{
person p;
p.getdata();
p.display();
return 0;
}