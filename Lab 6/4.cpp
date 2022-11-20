#include <iostream>

using namespace std;

class time
{
    private:
    int hr;
    int min;
    
    public:
    time(int x,int y=0)
    {
      hr=x;
      min=y;
    }
    time()
    {
        cout<<"\nEnter time in hours";
        cin>>hr;
        cout<<"\nEnter time in minutes";
        cin>>min;
    }
    void display()
    {
        if(hr>10)
        {
            cout<<"0"<<hr<<":"<<min<<endl;
        }
        else
        {
          cout<<hr<<":"<<min;
        }
    }
    
};
int main()
{
    time t1;
    time t2(5,10);
    time t3(6);
    t1.display();
    t2.display();;
    t3.display();
    return 0;
}