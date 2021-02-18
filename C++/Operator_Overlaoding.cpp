#include<iostream>
using namespace std;
class ABC
{
private:
    int a,b;
public:
    ABC()
    {
        a=0;
        b=0;
    }
    ABC(int x,int y)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
    }
    void operator--()   // If we want to use it as postfix we have to pass int as Argument void operator(int)
    {
        a=a-1;
        b=b-1;
    }
    void operator++(int)
    {
        a=a+1;
        b=b+1;
    }
};
int main()
{
    ABC T1,T2(20,40);
    T1.display();
    T2.display();
    --T2;
    //T2--;     Pass int in overloaded function
    T2.display();
    T2++;
    T2.display();
    return 0;
}
