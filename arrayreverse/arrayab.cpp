#include<iostream>
using namespace std;
int main()
{

    int i,n;
    int z[10];

    cout<<"enter the size of array";
    cin>>n;
cout<<"enter the array elements";
for(i=0;i<n;i++)
{
    cin>>z[i];
}
int j=0;

for(i=0;i<n;i++)
{
if(z[i]<0)
{
    if(i!=j)
    {
        int t=z[i];
        z[i]=z[j];
        z[j]=t;
        j++;
    


    }


}


}
for(i=0;i<n;i++)
{


cout<<"new array is "<<z[i];
}

}