#include<iostream>
using namespace std;
int main()
{
    int i;
    int j=0;
    int n;
    int z[10];
    int k[10];
    int b[10];
    cout<<"enter the array size";
    cin>>n;
    cout<<"enter the array elements";
    for(i=0;i<n;i++)
    {
        cin>>z[i];
    }
    for(i=0;i<n/2;i++)
    {
        k[i]=z[i];
    }
    for(i=n/2;i<n;i++)
    {
        b[i]=z[i];
    }
    for(i=0;i<n/2;i++)
    {
        cout<<k[i];
    }
    





}