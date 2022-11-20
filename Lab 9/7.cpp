#include <iostream>
using namespace std;

template <class T> void sort(T a[],int n)
{
    int i,j;
    T temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}

int main()
{
    int a[5]={5,4,3,2,1};
    float b[5]={5.5,4.4,3.3,2.2,1.1};
    sort(a,5);
    sort(b,5);
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<b[i]<<" ";
    }
    return 0;
}