#include<iostream>
using namespace std;

class student{
    public:
    int rollno;
    string name;
    int totalmarks;
    };

int main()
{
    student s1;
    cout<<"Enter the name: "<<endl;
    cin>>s1.name;

    cout<<"Enter roll number: "<<endl;
    cin>>s1.rollno;

    cout<<"Enter Total Marks: "<<endl<<endl;
    cin>>s1.totalmarks;

    cout<<s1.name<<endl;
    cout<<s1.rollno<<endl;
    cout<<s1.totalmarks<<endl;

    return 0;
}