#include<iostream>
using namespace std;
int main()
{
int flag;

int i;
int n=100;
int k;
int count=0;
int z[5];
cout<<"enter the array elements";
for(int f=0;f<5;f++)
{
    cin>>z[f];
}

cout<<"enter the prime number you want to add ";
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
        for(int l=0;l<5;l++)
        {
            int s=0;
            s=i+z[l];
cout<<s<<endl;
        }
    }
   }
}
return 0;
}

