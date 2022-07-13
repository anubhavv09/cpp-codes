#include<iostream>
using namespace std;
int main()
{
    int n;
    int d=1;
    cout<<"enter the value of n";
    cin>>n;
    int i=1;
    int j;
    while(i<=n)
    {
        j=1;
        while(j<=i)
        {
            cout<<d;
            d=d+1;
            j++;
        }
        cout<<endl;

      i=i+1;
    }
    cout<<endl;
}
