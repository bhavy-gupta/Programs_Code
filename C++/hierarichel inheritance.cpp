#include<iostream>
using namespace std;
class Shape
{
protected:
    int len,wid;
public:
    void get_data()
    {
        cout<<"Enter the value of len = ";
        cin>>len;
        cout<<"Enter the value of wid= ";
        cin>>wid;
    }
    void print_data()
    {
        cout<<"\nLength = "<<len<<endl<<"Width = "<<wid<<endl;
    }
};
class Triangle:public Shape
{
    int m;
public:
    void area()
    {
        m = wid*len*(0.5);
        cout<<"Area of Triangle = "<<m<<"\n"<<endl;
    }
};
class Rectangle:public Shape
{
    int m;
    public:
    void area()
    {
        m = len*wid;
        cout<<"Area of Rectangle ="<<m<<"\n"<<endl;
    }
};
int main()
{
    Triangle t1;
    Rectangle r1;
    t1.get_data();
    t1.print_data();
    t1.area();
    r1.get_data();
    r1.print_data();
    r1.area();
    return 0;
}
