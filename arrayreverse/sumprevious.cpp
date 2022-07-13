








#include<iostream>
using namespace std;
int main()
{
    int n;
    int i;
    int z[20];
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

         if(z[i]==z[j])
         {
           
           

         
                  
             
         }
         else
         continue;




     }   


    }

    






}