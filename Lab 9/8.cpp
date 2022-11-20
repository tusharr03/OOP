#include<iostream>
using namespace std;

template <typename t, typename u>
t get(t x,u y)
{
    cout<<"First input is "<< x<< " and second input is "<<y<<endl;
    return 0;
}

template<class t1,class t2>
class data
{
    public:
        data(t1 a, t2 b)
        {
            cout<<a<<" "<<b;
        }
        
};
int main()
{
    get<int,char>(5,'a');
    data<int , float>(6,6.0);
    return 0;
}