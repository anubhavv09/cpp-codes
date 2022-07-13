#include<iostream>
using namespace std;
int main()
{
int n ,i,k;
int z[5];
cout<<"enter the size of array";
cin>>n;
cout<<"enter the array elements";
for(i=0;i<n;i++)
{
    cin>>z[i];

}
for(i=0;i<n-1;i++)
{

for(i=0;i<n;i++)
{
if(z[i]>z[i+1])
{
    int t=z[i];
    z[i]=z[i+1];
    z[i+1]=t;


}

}

}
cout<<"enter the  k largest element which you want to find";
cin>>k;
for(i=0;i<n;i++)
{
    if(i==k-1)
    {
cout<<"k th largest element is"<<z[i];


    }
}






}