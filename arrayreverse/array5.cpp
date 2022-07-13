#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"enter the size";
    cin>>n;
    int z[10];
    cout<<"enter the array elements";
    for(i=0;i<n;i++)
    {
        cin>>z[i];
    }
    int p=1;
    for(i=0;i<n;i++)
    {
        p=p*z[i];
    }
    cout<<"the product is"<<p;

}