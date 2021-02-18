//WAP to find out a largest number between two variable using template.
#include<iostream>
using namespace std;
template <class T>
T larger(T a,T b)
{
    return (a>b)?a:b;
}
int main()
{
    int m,n;
    floatp,q;
    char s,t;
    cout<<"\nEnter the Integer Values = ";
    cin>>m>>n;
    cout<<"\nLargest is = "<<larger(m,n);
    cout<<"\nEnter the Float Values = ";
    cin>>p>>q;
    cout<<"\nLargest is = "<<larger(p,q);
    cout<<"\nEnter the Char Values = ";
    cin>>s>>t;
    cout<<"\nLargest is = "<<larger(s,t);
    return 0;
}
