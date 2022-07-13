#include<iostream>
using namespace std;
int main()
{
   int i;
   int z[10];
   int n=5;
   int g=z[0];
   cout<<"enter the array elements";
   for(i=0;i<5;i++)
   {
    cin>>z[i];
   }
   for(i=1;i<n;i++)
   {
    if(g<z[i])
    {
        g=z[i];
    }
   }
   cout<<g;
   
}