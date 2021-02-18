#include<iostream>
using namespace std;
int main()
{
    int *p=new int;
    *p=10;
    cout<<"Pointer p = "<<*p<<endl;
    char *q=new char('A');
    cout<<"Pointer q = "<<*q<<endl;
    int *r=new int[5];
    cout<<"Enter Elements : ";
    for(int i=0;i<5;i++)
        cin>>r[i];
    cout<<"Elements of Array : ";
    for(int i=0;i<5;i++)
    {
     cout<<r[i];
     cout<<"\n";
    }
    delete p;
    delete q;
    delete []r;
    return 0;
}
