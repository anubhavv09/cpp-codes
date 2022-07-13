#include<iostream>
using namespace std;
int main()
{
    int i,n;
    int c1=0,c2=0,c3=0,c4=0;
    int z[i];
    cout<<"enter the array size";
    cin>>n;
    cout<<"enter the array elements";
    for(i=0;i<n;i++)
    {
        cin>>z[i];
    }
    for(i=0;i<n;i++)
    {
    if(z[i]>0)
    { 
        c1++;


    }
    else 
    c2++;
    }

    for(i=0;i<n;i++)
    {
if(z[i]%2==0)
{
    c3++;
}
else 
c4++;

    }
    cout<<"no of positive no"<<c1;
    cout<<"no of negative no"<<c2;
    cout<<"no of even no"<<c3;
    cout<<"no of odd no"<<c4;

    

}
