#include<iostream>
using namespace std;
int main()
{
int n ,i,k;
int z[5];
int c;

cout<<"enter the size of array";
cin>>n;
cout<<"enter the array elements";
for(i=0;i<n;i++)
{
    cin>>z[i];

}
for(i=0;i<n-1;i++)
{

for(int j=i+1;j<n;j++)
{
    c=0;

if(z[i]==z[j])
{

    c++;
}

else
continue;



if(c==1)
{

    cout<<z[i];
}
 
}


}
}


