#include<iostream>
using namespace std;
int main()
{
int i,n;
int z[10];
int j,k;
cout<<"enter the size of array";
cin>>n;
cout<<"enter the array elements";
for(i=0;i<n;i++)
{

    cin>>z[i];
}
cout<<"enter the starting and ending point";
cin>>j>>k;
for(i=j;i<=k;i++)
{

 cout<<z[i];   
}






}