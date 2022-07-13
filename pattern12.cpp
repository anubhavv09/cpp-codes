#include<iostream>
using namespace std;
int main()
{  
    int n=7;
  int row,column=1;
  for(row=1;row<=n;row++)
  {
    char ch='A';
    for(column=1;column<=row;column++)
    {
        cout<<ch;
        ch=ch+1;
    }
    cout<<endl;

  }
}