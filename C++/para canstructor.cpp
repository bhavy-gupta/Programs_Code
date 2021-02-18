#include<iostream>
using namespace std;
class integer
{
    int m,n;
public:
    integer()
    {

    }
    integer(int, int);
    void display()
    {
        cout<<"\n m = "<<m;
        cout<<"\n n = "<<n;
    }
};
integer::integer(int x, int y)
{
    m = x;
    n = y;
}
int main()
{
    integer t1(10, 20);         //implicit call
    integer t2 = integer(40, 50);            //explicit call
    t1.display();
    t2.display();
}
