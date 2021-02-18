//Write a program for multiple inheritance
#include<iostream>
using namespace std;
class A
{
public:
    int a;
};
class B
{
public:
    int b;
};
class C : public A, public B
{
public:
    void show()
    {
        cout<<"\nEnter the value of a = ";
        cin>>a;
        cout<<"\nEnter the value of b = ";
        cin>>b;
        cout<<"\n a = "<<a;
        cout<<"\n b = "<<b;

    }
};
int main()
{
    C c1;
    c1.show();
    return 0;
}
