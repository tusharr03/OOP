#include <iostream>


using namespace std;


class StringA{
    private:
        string str;
        int length;
    public:
        StringA (string s ){
            str=s;
        }
        
        void conc_string(string s2){
            string s3=str+s2;
            cout<<"\nConcatenated string= "+s3;
        }
};
int main()
{
    StringA s("Hello");
    s.conc_string(" world");


    return 0;
}
