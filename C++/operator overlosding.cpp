// Operator Overloading
#include<iostream>
using namespace std;
class abc
{
    int a,b;
    public:
        abc()
        {
            a = 0;
            b = 0;
        }
        abc(int x, int y)
        {
            a = x;
            b = y;
        }
        void display()
        {
            cout<<"\n a = "<<a;
            cout<<"\n b = "<<b;
        }
        void operator++()
        {
            a++;
            b++;
        }
};
int main()
{
    abc a1(10,20);
    a1.display();
    ++a1;
    a1.display();
    return 0;
};
