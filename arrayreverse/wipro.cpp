#include<iostream>
using namespace std;
int main()
{
    string str;
    string str1;
    int i;
    int j=0;
    int n=10;
    string p="anubhav";
    string u="anubhavvvv";


for(i=0;i<4;i++)
{
    cout<<"enter the username";
    getline(cin, str);
    cout<<"enter the password";
    getline(cin, str1);
    if(u==str&&p==str1)
        {

            cout<<"sucessful";
        }
        else
        {
        cout<<"failed\n";
        j=j+1;
        }

        if(j==3)
        {
            break;
        }


} 
 

}