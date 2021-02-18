#include<iostream>
using namespace std;
class Test
{
private:
    int v[3];
public:
    Test()
    {
        for(int i=0;i<3;i++)
            v[i]=0;
    }
    friend Test operator*(int a,Test b);
    friend istream &operator>>(istream&,Test&);
    friend ostream &operator<<(ostream&,Test&);
};
Test operator*(int a,Test b)
{
    Test c;
    for(int i=0;i<3;i++)
    {
        c.v[i]=a*b.v[i];
    }
    return c;
}
istream &operator>>(istream &din,Test &b)
{
    for(int i=0;i<3;i++)
    {
        din>>b.v[i];
    }
    //return din;
}
ostream &operator<<(ostream &dout,Test &b)
{
    dout<<"(";
    for(int i=0;i<3;i++)
    {
        dout<<b.v[i]<<" , ";
    }
    dout<<")";
    //return dout;
}
int main()
{
    Test T1;
    cin>>T1;
    cout<<T1;
    int a=10;
    Test T2;
    T2=a*T1;
    cout<<T2;
    return 0;
}
