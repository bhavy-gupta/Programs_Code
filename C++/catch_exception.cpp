#include<iostream>
using namespace std;
int main()
{
    int a,b,x;
    cout<<"Enter the value of A : ";
    cin>>a;
    cout<<"Enter the value of B : ";
    cin>>b;
    x=a/b;
    try
    {
        if(x!=0)
        cout<<"\n Result is"<<x;
        else
        throw x;
    }
    catch (int m)
    {
        cout<<"\n Integer exception caught";
    }
    return 0;
}