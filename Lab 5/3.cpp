#include<iostream>


using namespace std;
class A;
class B
{
 float meters,centimeters;
 public:
 A(float m, float c){
 	meters = m;
 	centimeters  = c;
 }
 friend void compares(A & x,B &y);
};
class B
{
 float inch;
 float feet;
 public:
 	B(float i, float f){
 		inch = i;
 		feet = f;
	 }




friend void compares(A & ,B & );
};
void compares(A &a,B &b)
{
	if((b.feet * 0.0254) < a.meters  ){
		cout<<"Distance in meters and centimers is larger\n";
	}
	else{
		cout<<"Distance in inches and feet is larger\n";
	}
	
	
}
int main()
{
 A a(20,30);
 B b(100,60);
compares(a,b);
 
 


}

