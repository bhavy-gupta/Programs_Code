/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
class B     //Base class
{
private:
    int a;
public:
    int b;
    void get_ab()
    {
    cout<<"Enter the Value of A : "<<endl;
    cin>>a;
    cout<<"Enter the Value of B : "<<endl;
    cin>>b;
    }
    int get_a()
    {
    return a;
    }
    void show_a()
    {
    cout<<"A = "<<a;
    }
};
class D:public B    //Derived class
{
    int c;
    public:
    void multiply();
    void display();
};
/*
void B::get_ab()
{
    cout<<"Enter the Value of A : "<<endl;
    cin>>a;
    cout<<"Enter the Value of B : "<<endl;
    cin>>b;
}

void B::get_a()
{
    return a;
}
void B::show_a()
{
    cout<<"A = "<<a;
}
*/
void D::multiply()
{
    c=get_a()*b;
}
void D::display()
{
    show_a();
    cout<<"Multiply = "<<c;
}

int main()
{
    cout<<"Hello World";
    D d1;
    d1.get_ab();
    d1.show_a();
    d1.multiply();
    d1.display();
    return 0;
}
