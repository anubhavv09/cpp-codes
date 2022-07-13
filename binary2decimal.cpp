#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int c=0;
    int i;
    int n;

    cout<<"enter the number\n";
    cin>>n;
    int anubhav = n;
    while(anubhav>0)
    {
        anubhav=anubhav/10;
         c++;
    }
    // cout<<c<<endl;
    int b=0;
   for(i=0;i<c;i++)
   {
    int r=n%10;
    b=b+r*pow(2,i);
    n=n/10;
   }
   cout<<b;
}