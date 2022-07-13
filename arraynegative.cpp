#include<iostream>
using namespace std;
int main()
{
    int i;
    int n=5;
    int z[10];
    
   cout<<"enter the array elements" ;
   for(i=0;i<5;i++){
    cin>>z[i];
   }
   int p=z[0];
   for(int j=1;j<n;j++){
    if(p>0)
    {
        z[j]=p;
        int t=p;
        p=z[j];
        z[j]=t;
    }
    else
    continue;
   }
   for(i=0;i<n;i++)
   {
    cout<<z[i];
   }
}

   