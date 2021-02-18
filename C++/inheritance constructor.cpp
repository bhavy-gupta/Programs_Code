//WAP to demonstrate constructor in inheritance
#include<iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout<<"\nBase Class Constructor :-)";
    }
};
class B:public A
{
public:
    int x;
    B()
    {
        cout<<"\nDerived Default Constructor :-)";
    }
    B(int i)
    {
        x = i;
        cout<<"\nDerived Parameterised Constructor";
    }
};
int main()
{
    B b1;
    B b2(20);
    return 0;
}
