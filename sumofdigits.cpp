#include<iostream>
using namespace std;
int main()
{
int n;
int s=0;
cout<<"enter the number";
cin>>n;
while(n>0)
{
    int r=n%10;
    s=s+r;
    n=n/10;
}
cout<<"sum is "<<s;


}