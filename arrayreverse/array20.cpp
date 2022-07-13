#include<iostream>
using namespace std;
int main()
{
    int n,i;
    int z[10];
    cout<<"enter the array size ";
    cin>>n;
    cout<<"enter the array elements";
    for(i=0;i<n;i++)
    {
        cin>>z[i];

    }

    int x=z[n-1];
    for(i=n-1;i>0;i--)
    {
    z[i]=z[i-1];
  


    }
      z[0]=x;

    for(i=0;i<n;i++)
    {

        cout<<z[i];
    }




}