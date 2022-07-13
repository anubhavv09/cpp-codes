#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int n;
    int z[10];
    cout<<"enter the size of array";
    cin>>n;
    cout<<"enter the array elements";
    for(i=0;i<n;i++)
    {
        cin>>z[i];
    }

for(i=0;i<n;i++)
{

if(z[i]<0) // main condition is here whatever changes we  want to do in array will get reflected here//s
{

for(j=0;j<n;j++)
{

    int t=z[j];
    z[j]=z[i];
    z[i]=t;


}

}

}
for(i=0;i<n;i++)
{


cout<<z[i];
}

}