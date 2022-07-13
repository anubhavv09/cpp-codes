#include<iostream>
using namespace std;
int z=10;
int main()
{
    cout<<z<<endl;
    int z=2;
    cout<<z<<endl;
    //scope resolution operator//
    cout<<::z<<endl;

}