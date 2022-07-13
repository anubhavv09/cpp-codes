#include<iostream>
using namespace std;
int main()
{
    int i,n;
    int z[10];
    int count=0;
    cout<<"enter the size of array";
    cin>>n;
    cout<<"enter array elements";
    for(i=0;i<n;i++)
    {
        cin>>z[i];
    }
for(i=0;i<n;i++)
{
    count=count+1;
}

cout<<"the value of count is"<<count;

}