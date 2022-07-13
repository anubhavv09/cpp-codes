#include<iostream>
using namespace std;
  void myfunction(int &k,string &z)
{

    cout<<"k"<<endl;
    cout<<"z"<<endl;


}
int main()
{
    int n;
    string a;
    cout<<"Enter the value of n\n";
    cin>>n;
    cout<<"enter the name\n";
    getline(cin,a);
    myfunction(n,a);





}