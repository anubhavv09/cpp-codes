#include<iostream>
using namespace std;
int main()
{

    int n;
    int z[10];
    int k[10];
    int i=0;
    int j=0;
    cout<<"enter the first sorted array size";
    cin>>n;
    cout<<"enter the elements";
    for(i=0;i<n;i++)
    {
cin>>z[i];

    }

    int m;
    cout<<"enter the second sorted array size";
    cin>>m;
     cout<<"enter the elements";
   for(i=0;i<m;i++)
    {

cin>>k[i];

    }
    i=0;
    j=0;

    while(i<n&&j<m)
    {

        if(z[i]<k[j])
        {

            
            cout<<z[i];
            i++;
        }
        else if(z[i]>k[j])
        {
            
            cout<<k[j];
            j++;


        }
        else{

            cout<<z[i];
            i++;
            j++;
        }




    }

    while(i<n)
    {
        cout<<z[i];
        i++;
    }
    while(j<m)
    {
        cout<<k[j];
        j++;
    }


    
}




