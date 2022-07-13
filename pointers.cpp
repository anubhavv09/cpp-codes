#include<iostream>
using namespace std;
int main()
{
    int x=5;
    int *ptr;
    ptr=&x;
    *ptr=20;
    cout<<"the adress is "<<ptr<<endl;
    cout<<"the value store here is="<<*ptr<<endl;
}