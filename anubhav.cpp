#include<iostream>
using namespace std;

int main()
{
    int a,k,i;
    int z[10];
    
    cout<<"enter the size of array\n";
    cin>>a;
    for (i=0;i<a;i++)
    {
        cin>>z[i];
    }
    for(i=0;i<a;i++)
    {
        k=z[i]*z[i];
        cout<<"the value of square is "<<k<<endl;
    }
}
