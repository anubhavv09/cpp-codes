#include<iostream>
using namespace std;
int main()
{
    int no;
    int n;
    int z[10];
    int c=3;
    int i=0;
    
    int j;

    cout<<"enter the no";
    cin>>no;
    int rem;
     while(no>0)
     {

rem=no%2;
no=no/2;
z[i]=rem;
i++;






     }

     for(j=i-1;j>=0;j--)
     {

         cout<<z[j];
     }


     




    




}