#include<iostream>
using namespace std;
template<class T>
class ABC
{
    T x,y;
public:
    ABC(T a,T b)
    {
        x = a;
        y = b;
    }
    void show()
    {
        cout<<"\nx = "<<x;
        cout<<"\ny = "<<y;

    }

};
int main()
{
    ABC<int> a1(5,6);
    a1.show();
    ABC<char> a2('X','Z');
    a2.show();
    return 0;
}
