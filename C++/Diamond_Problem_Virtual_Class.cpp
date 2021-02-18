#include<iostream>
using namespace std;
class A
{
    protected:
    int a,b;
};
class B:virtual public A
{
    protected:
    int b;
};
class C:virtual public A
{
    protected:
    int c;
};
class D:public B,public C
{
    public:
    void display()
    {
        cout<<"Enter Values of a,b,c : ";
        cin>>a>>b>>c;
        cout<<"The Values are = "<<a<<b<<c<<endl;
    }
};
int main()
{
    D d1;
    d1.display();
    return 0;
}