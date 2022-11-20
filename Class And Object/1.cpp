#include<iostream>
using namespace std;

class student{
    int rollno;
    string name;
    int marks;
    public:
    void getdata();
    void display(){
     
    cout<<name<<endl;
    cout<<rollno<<endl;
    cout<<marks<<endl;
}

        };

void student :: getdata()
{
    cout<<"Enter student name: "<<endl;
    cin>>name;
    
    cout<<"Enter Student Roll number: "<<endl;
    cin>>rollno;
    
    cout<<"Enter Student Marks: "<<endl;
    cin>>marks;
    }     

int main()
{
    student s1;
    s1.getdata();
    s1.display();    
    return 0;
}