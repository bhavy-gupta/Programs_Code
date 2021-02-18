#include<iostream>
using namespace std;
class B
{
    int a;
public:
    int b;
    void get_ab();
    int get_a();
    void show_a();
};
class D:public B
{
    int c;
public:
    void multiply();
    void display();
};
void B::get_ab()
{
    cout<<"Enter the value of A = ";
    cin>>a;
    cout<<"Enter the value of B = ";
    cin>>b;
}
int B::get_a()
{
    return a;
}
void B::show_a()
{
    cout<<"A = "<<a<<endl;
}
void D::multiply()
{
    c=b*get_a();
}
void D::display()
{
    show_a();
    cout<<"B = "<<b<<endl;
    cout<<"C = "<<c<<endl;
}
int main()
{
    D d1;
    d1.get_ab();
    d1.show_a();
    d1.multiply();
    d1.display();
    return 0;
}