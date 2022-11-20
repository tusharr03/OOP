#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class str{
    string s;
    int len;
    public:
    str(){
        cout<<"Enter the string:";
        cin>>s;
        len=s.length();
    }  
    str(string a){
       s=a;
       len=s.length(); 
    }
    void getval(){
        cout<<"The string is "<<s<<" with length "<<len<<endl;
    }
};
int main(){
    str s1;
    str s2("abcde");
    s1.getval();
    s2.getval();
    return 0;
}