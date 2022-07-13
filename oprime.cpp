#include<iostream>
using namespace std;
int main()
{
    int n;
    int i=2;
    cout<<"enter the number";
    cin>>n;
  while(i<=n-1)
  {

    if(n%i==0)
    {
        cout<<"not prime";
        break;
    }
i++;
  }
  if(i==n)
  {
    cout<<"prime"<<i;

  }

}
