#include<iostream>
using namespace std;
int main()
{  
    int row=1;
    int column;
    int n;
    cout<<"enter the value of n";
    cin>>n;
    while(row<=n)
    {
column=1;
      
      while(column<=row)
      {
        cout<<column;
        column++;
      }
       cout<<endl;
      row=row+1;

    }
    
}
