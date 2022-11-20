#include<iostream>
using namespace std;

class details{
    private:
    string name;
    int rollno;
    double totalmarks;

    public:
    details()
    {
        details(string n,int r,double t)
        name=n;
        rollno=r;
        totalmarks=t;

    }
    void setdetails(string n,int r,double t)
    {
        name=n;
        rollno=r;
        totalmarks=t;
    }
    string getname(){
        return name;
    }
    int rollno(){
        return rollno;
    }
    double totalmarks(){
        return totalmarks;
    }
    void printdetails()
    {
        
    }
}