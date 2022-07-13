 #include<iostream>
using namespace std;
int main()
{
int no;
int n;
int rem;
int k;
int d=1;

cout<<"enter the no\n";
cin>>no;
cout<<"enter the no you want to search";
cin>>n;
 while(no>0)
 {
     rem =no%10;
     no=no/10;

     if(rem==n)
     {
         k=1*d;





     }
     d=d*10;




 }

 cout<<"the value of d is"<<k;



}