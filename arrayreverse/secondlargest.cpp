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

for(int j=0;j<n;j++)
{
if(z[j]>z[j+1])
{
    int t=z[j];
    z[j]=z[j+1];
    z[j+1]=t;


}

}

}
   
    
         cout<<z[n-2];




     

    

    



    
}