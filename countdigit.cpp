#include<iostream>
using namespace std;
int main()
{
    int c=0;
    int n;
    cout<<"enter the number\n";
    cin>>n;
    while(n>0)
    {
        n=n/10;
         c++;

    }
    cout<<c;
}