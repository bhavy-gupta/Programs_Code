#include<iostream>
using namespace std;
class base
{
public:
    virtual void display()
    {
        cout<<"\nI'm in Base class"<<endl;
    }
};
class derived:public base
{
public:
    void display()
    {
        cout<<"I'm in Derived class"<<endl;
    }
};
int main()
{
    base *bptr;
    base b1;
    derived d1;
    bptr = &b1;
    bptr->display();
    bptr = &d1;
    bptr->display();
    return 0;
}
