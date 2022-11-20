#include<iostream>
using namespace std;

class age{
    public:
    int child_age;
    age(): child_age(20){}
        int father_age(age);

};

int father_age(age d){
    d.child_age+=15;
    return d.child_age;
}
int main(){
    age D;
    cout<<"Father's Age: "<<father_age(D)<<endl;
    return 0;
}