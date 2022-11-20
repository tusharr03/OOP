#include<iostream>
using namespace std;


int main()
{
    int n,j;
    int index;
    cout<<"Enter the number of elements you want to input in the array";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the index of the element you want to access:"<<endl;
    cin>>index;
    j=(index>=n||index<0)?0:1;
    try
    {
        if(j!=0)
        {
            cout<<"element at the given index is "<<arr[index];
        }
        else
        {   
            throw(j);
        }
    }
    catch(int k)
    {
        cout<<"Exception caught: segmentation fault"<<endl;
    }
}