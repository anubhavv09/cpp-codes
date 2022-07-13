#include<iostream>
using namespace std;
int main()
{
int no;
int sn;
int c=0;
int rem2;

int rev=0,rem;
cout<<"enter the no";
cin>>no;
 while(no>0)
 {

rem=no%10;
rev=rev*10+rem;
no=no/10;

 }

cout<<"enter the no you want to search";
cin>>sn;
cout<<rev<<endl;

while(rev>0)
{

rem2=rev%10;
c=c+1;
rev=rev/10;

if(rem2==sn)
{

  cout<<c;
}



}




    
}