#include <iostream>

using namespace std;

class Student {
    public:
        string name, email;
        int roll, marks;
        
        void input(){
            cout << "Enter name, email, roll, marks: ";
            cin >> name >> email >> roll >> marks;
        }
        void display(){
            cout << "Name: " << name <<", Marks: " << marks << endl;
        }
};

void sort(Student s[]){
    for( int i = 0; i < 5-1; i++ ){
        for( int j = i + 1; j < 5; j++ ){
            if( s[j].marks > s[i].marks ){
                Student temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
}

int main(){
    Student morning[5], evening[5];
    cout << "Input for morning shift: \n";
    for( int i = 0; i < 5; i++ ){
        morning[i].input();
    }
    cout << "Input for evening shift: \n";
    for( int i = 0; i < 5; i++ ){
        evening[i].input();
    }
    sort( morning );
    sort( evening );
    for( int i = 0; i < 3; i++ ){
        cout << "#" << i+1 << " of Morning: \n";
        morning[i].display();
        cout << "#" << i+1 << " of Evening: \n";
        evening[i].display();
    }
    return 0;
}