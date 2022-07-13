#include<iostream>
using namespace std;
int main()
{
   int n;
   int row,column;
   int x;
   cout<<"enter the value of n";
   cin>>n;
   for(row=1;row<=n;row++)
   {
    if(row%2==0)
    {
        x=0;
    }
    else
    x=1;

 for(column=1;column<=row;column++)
 {
    cout<<x;
    x=1-x;
 }
  cout<<endl;
   }
  
  
}
  

