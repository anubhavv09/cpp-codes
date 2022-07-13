#include<iostream>
using namespace std;
int main()
{
    int z[10];
    int l[10];
    int i,k;
    int n;

    cout<<"enter the size of array"; 
    cin>>n;
    cout<<"enter the array elements";
    for(i=0;i<n;i++)
    {
        cin>>z[i];
    }
    int s=0;

    for(i=0;i<n;i++)
    {
        s=0;  // the value will keep on updating zero//

        for(k=i;k<n;k++)
        {
            
            s=s+z[k];


        }
        


l[i]=s;        // storing a sum into the array//
    }
    cout<<"the sum is"<<"  ";
    for(i=0;i<n;i++)
    {
        cout<<l[i];
    }


     int g=l[0];
     for(i=1;i<n;i++)
     {

       if(g<l[i])
       {

           g=l[i];
       }

     }
     cout<<"the greatest sum is"<<g;







}





