#include<iostream>
using namespace std;
int main()
{
    int n;
    int s=0;
    cout<<"enter the no";
    cin>>n;

while(n>0)
{
  int r=n%10;

  n=n/10;
    s=s+r;
  





}  
cout<<"the sum is"<<s;  
}