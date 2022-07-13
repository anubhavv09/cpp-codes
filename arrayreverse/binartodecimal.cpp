#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int no;
int rem=0;
int i=0;
int d=0;
cout<<"enter the number";
cin>>no;
while(no>0)
{

    rem=no%10;
    no=no\10;
     d= d+rem*pow(2,i);
    i++;



}
cout<<d;




}