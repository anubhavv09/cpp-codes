#include<iostream>
using namespace std;
int main()
{
    int n=5;
    int z[10];
    int i;
    cout<<"enter the array elements";
    for(i=0;i<n;i++)
    {
       cin>>z[i];
    }
    for(i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(z[i]==z[j])
            {
                cout<<z[i];
                break;
                return 0;
            }
            else{
            continue;
            } 
        }
    }
}