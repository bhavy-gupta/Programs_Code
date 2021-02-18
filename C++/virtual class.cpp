//WAP to demonstrate the concept of virtual base class
#include<iostream>
using namespace std;
class A
{
public:
    void show()
    {
        cout<<"\nThis is Base Class"<<endl;
    }
};
class B:virtual public A
{
public:
    void display()
    {
        cout<<"\nThis is Derived Class 1"<<endl;
    }
};
class C:virtual public A
{
public:
    void display()
    {
        cout<<"\nThis is Derived Class 2"<<endl;
    }
};
class D:public B,public C
{
public:
    void output()
    {
        cout<<"\nThis is Child Class"<<endl;
    }
};
int main()
{
    D d1;
    d1.show();
    return 0;
}
