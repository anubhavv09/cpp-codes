#include<iostream>
using namespace std;
int main()
{
    int i;
    int a,b;
    int hc;
    cout<<"enter the two numbers";
    cin>>a>>b;
    int g=max(a,b);
    cout<<g<<endl;
    for(i=1;i<g;i++)
    {
        if(a%i==0&&b%i==0)
        {
            hc=i;
        }
    }
    cout<<hc;
}
