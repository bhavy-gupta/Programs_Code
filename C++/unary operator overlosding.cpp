//Unary operator overloading
#include<iostream>
using namespace std;
class ABC
{
    int a, b;
public:
    ABC()
    {
        a= 0;
        b=0;
    }
    void display()
    {
        cout<<"\na = "<<a;
        cout<<"\nb = "<<b;
    }
    void operator--()
    {
        a=a-1;
        b=b-1;
    }
};
int main()
{
    ABC a1(20,40);
    a1.display();
    --a1;
    a1.display();
    return 0;
}
