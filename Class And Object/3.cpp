#include<iostream>
using namespace std;

class student{
    int rollno;
    string name;
    int marks[10];
    float percentage;
    float totalmarks=0;

    public:
    void getdata();
    void display(){
     
    cout<<name<<endl;
    cout<<rollno<<endl;
    cout<<totalmarks<<endl;
    cout<<percentage<<"%"<<endl;

}

        };

void student :: getdata()
{

    cout<<"Enter student name: "<<endl;
    cin>>name;
    
    cout<<"Enter Student Roll number: "<<endl;
    cin>>rollno;
    
    for(int i=0;i<10;i++)
    {
        cout<<"Enter Student Marks: "<<endl;
        cin>>marks[i]; 
        
    }    

    
    for(int i=0;i<10;i++)
    {
    
        totalmarks+=marks[i];
    }

    percentage=(totalmarks/10);


    }     

int main()
{
    student s1;
    s1.getdata();
    s1.display();    
    return 0;
}