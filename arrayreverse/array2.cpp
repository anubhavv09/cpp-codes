#include<iostream>
using namespace std;
int main()
{
int n;
int i;
int z[10];
cout<<"enyter the size of array\n";
cin>>n;


cout<<"enter array elements\n";

for(i=0;i<n;i++)

{
    cin>>z[i];
}

 int start=0;
 int end=n-1;
 while(start<end)
 {
int temp=z[start];
z[start]=z[end];
z[end]=temp;
start++;
end--;

    
 }
 for(i=0;i<n;i++)
 {
     cout<<"new array is\n "<<z[i];


 }






}