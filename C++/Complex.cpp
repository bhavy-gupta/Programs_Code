#include<iostream>
using namespace std;
class complex
{
private:
    int r,im;
public:
    void getdata(int x,int y)
    {
        r=x;
        im=y;
    }
    void display()
    {
        cout<<"Complex No. = "<<r<<"i"<<im<<"\n";
    }
    complex add(complex,complex);
};
complex complex :: add(complex p,complex q)
{
    complex temp;
    temp.r=p.r+q.r;
    temp.im=p.im+q.im;
    return temp;
}
int main()
{
    complex p1,p2,p3;
    p1.getdata(10,40);
    p1.display();
    p2.getdata(20,60);
    p2.display();
    p3=p1.add(p1,p2);
    p3.display();
    return 0;
}
