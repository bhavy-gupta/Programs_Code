#include<iostream>
using namespace std;
template<class T>
class ABC
{
    T x,y;
public:
    ABC(T a,T b)
    {
        x=a;
        y=b;
    }
    void show()
    {
        cout<<"x="<<x<<endl;
        cout<<"y="<<y<<endl;
    }
};
int main()
{
    ABC<int> a1(5,6);
    a1.show();
    return 0;
}