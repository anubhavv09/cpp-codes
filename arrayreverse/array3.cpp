
#include<iostream>
using namespace std;
int main()
{
    int n,i;
    int z[i];
    cout<<"enter the size of the array";
    cin>>n;
    cout<<"enter the array elements";
    for(i=0;i<n;i++)
    {
        cin>>z[i];

    }
    int g=z[0];
    for(i=1;i<n;i++)
    {
        if(g<z[i])
        {
            g=z[i];

        }

       
    }
     cout<<"the greatest element in the array is"<<g;


}