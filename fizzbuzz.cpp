#include<iostream>
using namespace std;
int main()
{
    int n=20;
    int i;
    for(i=1;i<=20;i++)
    {
        if(i%3==0&&i%5==0)
        {
            cout<<"buzzfizz";

        }
        else if(i%5==0)
        {
        cout<<"buzz";
        }
        else if(i%3==0)
        {
            cout<<"fizz";

        }
        else{
            cout<<i;
        }
    }
}