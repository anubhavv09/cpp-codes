#include<iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<"enter the three numbers";
cin>>a>>b>>c;
if(a>=b&&a>=c)
{
    cout<<"a is the greatest";
}
else if (b>=a&&b>=c)
{
  cout<<"b is greatest";
}
else
cout<<" c is greatest";

}

