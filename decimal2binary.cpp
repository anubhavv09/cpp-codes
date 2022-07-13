#include<iostream>
using namespace std;
int main()
{
    int n;
    int z[10];
    int i=0;
    cout<<"enter the number";
    cin>>n;
    while(n>0)
    {
       int r=n%2;
       z[i]=r;
       i++;
       n=n/2;
    }
    for(i=i-1 ;i>=0 ;i--)
{
cout<<z[i];
}

}