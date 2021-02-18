// Objective - Program of single Inheritance
#include<iostream>
using namespace std;
class B                 //Base Class
{
    int a;
    public:
        int b;
        void get_ab();
        int get_a();
        void show_a();
};
class D:public B        //Derived Class
{
    int c;
    public:
        void multiply();
        void display();
};
void B::get_ab()
{
    cout<<"\nEnter the value of a = ";
    cin>>a;
    cout<<"\nEnter the value of b = ";
    cin>>b;
}
int B::get_a()
{
    return a;
}
void B::show_a()
{
    cout<<"\na = "<<a;
}
void D::multiply()
{
    c = b*get_a();
}
void D::display()
{
    show_a();
    cout<<"\nb = "<<b;
    cout<<"\nc = "<<c;
}
int main()
{
    D d1;
    d1.get_ab();            //Base Class
    d1.show_a();            //Base Class
    d1.multiply();
    d1.display();
    return 0;
}
