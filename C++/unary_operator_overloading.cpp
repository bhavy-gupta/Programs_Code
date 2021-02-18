#include<iostream>
using namespace std;
class Test
{
private:
    int a,b;
public:
    Test()
    {
        a=0;
        b=0;
    }
    Test(int x,int y)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
        cout<<"\n";
    }
    void operator--()
    {
        a=a-1;
        b=b-1;
    }
    void operator++()
    {
        a=a+1;
        b=b+1;
    }
};
int main()
{
    Test T1,T2(20,40);
    T1.display();
    T2.display();
    cout<<"Overloading --operator"<<endl;
    --T2;
    T2.display();
    cout<<"Overloading ++operator"<<endl;
    ++T2;
    T2.display();
    return 0;
}
