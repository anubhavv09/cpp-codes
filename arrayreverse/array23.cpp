#include<iostream>
using namespace std;
int main()
{

int n;
    int i;
    int z[20];
    int d ;
    int no;
    int c=0;
    cout<<"enter the element  whose sum";
    cin>>no;
    cout<<"enter the size of array";
    cin>>n;
    cout<<"enter the array elements";
    for(i=0;i<n;i++)
    {
     
     cin>>z[i];

    }

    for(i=0;i<n;i++)
    {

     for( int j=i+1;j<n;j++)  
     {
         d=0;
         d=z[i]+z[j];

         if(d==no)
         {
             c=c+1;



         }
     }
    }
    cout<<c;






}