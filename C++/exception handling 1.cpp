#include<iostream>
using namespace std;
void main()
{
    int a,b,x;
    cout<<"\nEnter the value of a & b";
    cin>>a>>b;
    x = a/b;
    try
    {
        if(x!=0)
            cout<<"\nResult = "<<x;
        else
            throw x;
    }
    catch(int m)
    {
        cout<<"\nInteger Exception Occur";
    }
    return 0;
}
