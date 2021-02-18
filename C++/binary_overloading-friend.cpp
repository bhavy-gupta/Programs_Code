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
    Test(int m,int n)
    {
        a=m;
        b=n;
    }
    Test(Test & T1)
    {
        a=T1.a;
        b=T1.b;
    }
    void display()
    {
        cout<<a<<"+i"<<b<<endl;
    }
    friend Test operator +(Test,Test);
};
Test operator+(Test T1,Test T2)
{
    cout<<"Overloading Binary Operator + "<<endl;
    Test temp;
    temp.a=T1.a+T2.a;
    temp.b=T1.b+T2.b;
    return temp;
}
int main()
{
    Test T1(34,78),T2(45,89),T3;
    T1.display();
    T2.display();
    T3=T1+T2;
    T3.display();
    return 0;
}
