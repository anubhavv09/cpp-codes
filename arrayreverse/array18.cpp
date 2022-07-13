#include<iostream>
using namespace std;
int main()
{
    int i,n;
    int z[10];
    int c1=0,c2=0,c3=0;
    cout<<"enter the array size";
    cin>>n;
cout<<"enter the array elements in 0 1 and 2s";
for(i=0;i<n;i++)
{

cin>>z[i];

}
while(i<n)
{

if(z[i]==0)
{
    c1=c1+1;
}
else if(z[i]==1)
{
    c2=c2+1;
}
else
c3=c3+1;


for(i=0;i<c1;i++)
{
    z[i]==0;
}
for(i=c1;i<c2 +c1;i++)
{
    z[i]==1;
}
for(i=c2+c1;i<n;i++)
{
    z[i]==2;
}






}


for(i=0;i<n;i++)
{
    cout<<z[i];
}









}