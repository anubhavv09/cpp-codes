#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int no;
int n,i ,rev,rem;
int count=0;
int d=0;

cout<<"enter the no\n";
cin>>no;

cout<<"enter the no you want to search";
cin>>n;
while(no>0)
{
rem =no%10;
count=count+1;
no=no/10;

if(rem==n)
{
   
    d=1*pow(10,count-1);
  

cout<<d;

}






}




}