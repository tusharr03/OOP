#include <iostream>
using namespace std;
class student
{
    int rollNo;
    char name[30];
    int marks[6];

public:
    void getdata();
    void display();
    float percentage();
};
void student::getdata()
{
    cout << "Enter Roll No. : ";
    cin >> rollNo;
    cout << "Enter Name : ";
    cin >> name;
    cout << "Enter Marks of 6 subjects (out of 100): ";
    for (int i = 0; i < 6; i++)
    {
        cin >> marks[i];
    }
}
void student::display()
{
    cout << rollNo << "\t";
    cout << name << "\t";
    for (int i = 0; i < 6; i++)
    {
        cout << marks[i] << " ";
    }
    cout << "\t";
    cout << percentage() << "%";
    cout << endl;
}
float student::percentage()
{
    int sum = 0;
    for (int i = 0; i < 6; i++)
    {
        sum = sum + marks[i];
    }
    float percentage;
    percentage = (float)sum / 6.0;
    return percentage;
}
int main()
{
    student std[30];
    int n, i;
    cout << "Enter Number of students - ";
    cin >> n;
    for (i = 0; i < n; i++)
        std[i].getdata();

    cout << "Student Data - " << endl;
    for (i = 0; i < n; i++)
        std[i].display();
}