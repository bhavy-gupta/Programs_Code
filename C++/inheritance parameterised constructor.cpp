//WAP to demonstrate use of paramerterized constructor in Base Class
#include<iostream>
using namespace std;
class alpha
{
    int a,b;
public:
    alpha(int x, int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout<<"\na = "<<a<<"\nb = "<<b;
    }
};
class beta
{
    int c;
public:
    beta(int x, int y)
    {
        c = x + y;
    }
    void display()
    {
        cout<<"\nc = "<<c;
    }
};
class gamma:public alpha, public beta
{
    int d;
public:
    gamma(int m, int n, int p, int q):alpha(m,n),beta(p,q),d(m + n + p + q)
    {
        // OR d = m+n+p+q;
    }
    void display()
    {
        alpha::display();
        beta::display();
        cout<<"\nd = "<<d;
    }
};
int main()
{
    gamma g1(10,20,30,40);
    g1.display();
    return 0;
}
