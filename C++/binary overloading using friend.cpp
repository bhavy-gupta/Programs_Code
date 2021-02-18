//Binary Operator overloading using c
#include<iostream>
using namespace std;
class complex
{
    int a,b;
public:
    complex()
    {
        a=0;
        b=0;
    }
    complex(int m,int n)
    {
        a=m;
        b=n;
    }
    complex(complex &c1)
    {
        a=c1.a;
        b=c1.b;
    }
void display()
{
    cout<<"\n"<<a<<"+i"<<b;
}
friend complex operator+(complex,complex);
};
complex operator+(complex c1, complex c2)
{
    complex temp;
    temp.a = c1.a+c2.a;
    temp.b = c1.b+c2.b;
    return temp;
}
int main()
{
    complex c1(34,78),c2(45,89),c3;
    c1.display();
    c2.display();
    c3=c1+c2;           //operator+(c1,c2)-> Friend Function //c1.operator+(c2)-> Member Function
    c3.display();
    return 0;
}
