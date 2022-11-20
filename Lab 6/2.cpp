#include<iostream>
using namespace std;

class stringA
{
    private:
    string str;
    int length;

    public:
    stringA(string s)
    {
        str=s;
    }

    void conc_string(string s2)
    {
        string s3=str+s2;
        cout<<"\nThe concantenated string is "+s3;

    }
};
int main()
{
    stringA s("hello");
    s.conc_string(" world ");
    return 0;
}