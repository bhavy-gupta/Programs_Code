//WAP to demonstrate the Virtual Base Class OR Diamond Problem
#include<iostream>
using namespace std;
class A
{
protected:
    int a,b;
};
class B : virtual public A      //Parent Class [Class A] will be virtual in order to resolve the ambiguity
{
protected:
    int b;
};
class C : virtual public A
{
protected:
    int c;
};
class D : public B, public C
{
public:
    void display()
    {
        cout<<"\nEnter the value of a, b, c = ";
        cin>>a>>b>>c;
        cout<<"\nThe values are: a = "<<a<<"b = "<<b<<"c = "<<c;
    }
};

int main()
{

    D d1;
    d1.display();
    return 0;
}
