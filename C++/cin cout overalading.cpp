#include<iostream>
using namespace std;
class vector
{
//    int v[3];
    public:
        int v[3];
        vector()
        {
            for(int i=0;i<3;i++)
                v[i]=0;
        }
        friend vector operator*(int,vector);
        friend istream &operator<<(istream &,vector &);
        friend ostream &operator<<(ostream &,vector &);
};
vector operator*(int a,vector b)
{
    vector c;
    for(int i=0;i<3;i++)
        c.v[i]=a*b.v[i];
    return c;
}
istream &operator>>(istream &din,vector &b)
{
    for(int i=0;i<3;i++)
        din>>b.v[i];
    //return din;
}
ostream &operator<<(ostream &dout,vector &b)
{
    dout<<"(";
    for(int i=0;i<3;i++)
        dout<<b.v[i]<<",";
    dout<<")";
    //return dout;
}
int main()
{
    vector m;
    cin>>m;         //istream operator>>(din,m);
    cout<<m;         //ostream operator>>(dout,m);
    int a=10;
    vector p;
    p=a*m;      //operator*(int a,vector m)
    cout<<p;
    return 0;
}
