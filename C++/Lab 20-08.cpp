/*  Use of Pointer to a member in a class   */

#include<iostream>
using namespace std;
class test
{
private:
    int x,y;
public:
    void getdata(int m,int n)
    {
        x=m;
        y=n;
    }
    friend int sum(test);
};
int sum(test t1)
{
    int test::*px=&test::x;
    int test::*py=&test::y;
    test *pt=&t1;
    //int s=t1.*px+t1.*py;
    int s=pt->*px+pt->*py;
    return s;
}
int main()
{
    test n;
    void (test::*pf)(int,int)=&test::getdata;
    (n.*pf)(20,30);
    cout<<"Sum = "<<sum(n)<<endl;
    test *op=&n;
    (op->*pf)(50,60);
    cout<<"Sum = "<<sum(n)<<endl;
    return 0;
}


//WAP to create two class DM(Meter) and DF(Feet) then create a friend Functiom that sum the distance either in feet or meter.
//1ft=.304meter
