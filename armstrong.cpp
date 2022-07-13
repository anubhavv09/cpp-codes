#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    int temp;
    int q;
    int ar=0;
    int count=0;
cout<<"enter the value of n \n";
cin>>n;
temp=n;
while(temp>0)
{
    int r=temp%10;
    count=count+1;
temp=temp/10;
}
cout<<count<<endl;
temp=n;
while(temp>0)
{
    int z=temp%10;
    ar=ar+pow(z,count);
    temp=temp/10;
    
}
cout<<ar<<endl;
temp=n;
if(ar==temp)
{
    cout<<"armstrong no";
}
else
cout<<"not armstrong";



}


 