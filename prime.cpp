#include<iostream>
using namespace std;
int main()
{
    int i,n;
cout<<"enter the value of n\n";
cin>>n;
for(i=2;i<n;i++)
{

    if(n%i==0)
    {
        cout<<"its not a prime"<<endl;
        break;
    }
}
if(i==n)
{
    cout<<"prime";
}


}

