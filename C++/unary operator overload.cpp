#include<iostream>
using namespace std;
class over
{
    int a,b;
    public:
        over()
        {
            a=0;
            b=0;
        }
        void display()
        {
            cout<<"\n a = "<<a;
            cout<<"\n b = "<<b;
        }
        over(int x, int y)
        {
            x = a;
            y = b;
        }
        void operator--()
        {
            a = a-1;
            b = b-1;
        }
};
int main()
{
    over o1(20,40);
    o1.display();
    --o1;
    o1.display();
}
