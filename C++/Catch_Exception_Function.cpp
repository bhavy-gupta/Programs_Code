#include<iostream>
using namespace std;
void divide(int x,int y,int z)
{
    int r;
    if (y==z)
        throw (y-z);
    else
        r=x/(y-z);
    cout<<"r="<<r<<endl;
}
int main()
try
{
    divide(10,20,25);
    divide(10,20,20);
}
catch(int m)
{
    cout<<"Integer exception caught"<<endl;
}