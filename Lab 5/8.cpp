#include<iostream>
using namespace std;
class B;
class C;
class A{
    int x1;
    public:
    friend void largest(A,B,C);
    void getvalue(){
        cin>>x1;
    }
}f1;
class B{
    int x2;
    public:
    friend void largest(A,B,C);
    void getvalue(){
        cin>>x2;
    }
}f2;
class C{
    int x3;
    public:
    friend void largest(A,B,C);
    void getvalue(){
        cin>>x3;
    }
}f3;
void largest(A a,B b,C c){
    if(a.x1>b.x2&&a.x1>c.x3)
        cout<<"largest is:"<<a.x1;
    if(a.x1<b.x2&&b.x2>c.x3)
        cout<<"largest is:"<<b.x2;
    if(c.x3>b.x2&&a.x1<c.x3)
        cout<<"largest is:"<<c.x3;
    
    

}
int main(){
    f1.getvalue();
    f2.getvalue();
    f3.getvalue();
    largest(f1,f2,f3);
}