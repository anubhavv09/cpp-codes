
#include<iostream>
using namespace std;
int main()
{
    int i,n,m;
    int z[10],a[20];
    cout<<"enter the size of the array";
    cin>>n;
    cout<<"enter first array elements";
    for(i=0;i<n;i++)
    {
    
cin>>z[i];
    }

    cout<<"enter the size of the array 2";
    cin>>m;
    cout<<"enter first array elements";
    for(i=0;i<m;i++)
    {
    
cin>>a[i];
    }

    for(i=0;i<n;i++)
    {

        if(z[i]==a[i])
        {
            continue;
        }

        else if(z[i]!=a[i])
        {
            cout<<z[i];
            cout<<a[i];
        }
    }
             
    
}