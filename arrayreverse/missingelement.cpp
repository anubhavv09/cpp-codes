#include<iostream>
using namespace std;
int main()
{
int n;
int i;
int z[20];
int s1=0;
int k;
cout<<"enter the size of sorted array";
cin>>n;
cout<<"enter the elements";
for(i=0;i<n;i++)
{

cin>>z[i];


}
for(i=0;i<n;i++)
{

s1=s1+z[i];


}

i=z[0];
k=z[n-1];
int f;
int s2=0;


for(f=i;f<=k;f++)
{
    s2=s2+f;



}
int a;
a=s2-s1;


cout<<a;







}