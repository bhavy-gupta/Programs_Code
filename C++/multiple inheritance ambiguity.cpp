//Write a program for multiple inheritance
#include<iostream>
using namespace std;
class A
{
public:
    int a;
    void get_data()
    {
        cout<<"\nEnter a = ";
        cin>>a;
    }
    void display()
    {
       cout<<"\na = "<<a;
    }
};
class B
{
    int b;
    void get_data()
    {
        cout<<"\nEnter b = ";
        cin>>b;
    }
    void display()
    {
        cout<<"\nb = "<<b;
    }

};
class C:public A, public B
{
public:
    int c;
    void get_c()
    {
        cout<<"\nEnter c = ";
        cin>>c;
    }
    void print_c()
    {
        cout<<"\nc = "<<c;
    }
};
int main()
{
    C c1;
    c1.A::get_data();
    c1.A::display();
    c1.B::get_data();
    c1.B::display();
    c1.get_c();
    c1.print_c();
    return 0;
}
