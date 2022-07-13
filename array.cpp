#include<iostream>
using namespace std;
int main()
{
int flag;

int i;
int n=100;
int k;
int count=0;
cout<<"enter the prime number you want to search";
cin>>k;
for(i=2;i<=100;i++)
{
    flag=0;
    for(int j=2;j<=i/2;j++)
    {
        if(i%j==0)
        {
            flag=1;
            break;
        }
    }
   
   if(flag==0)
   {
    count++;
    if(count==k)
    {
        cout<<i;
        break;
    }
   }
}
return 0;
}

