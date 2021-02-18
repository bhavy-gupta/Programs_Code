//WAP to create class Box and Calculate the volume of Box
#include<iostream>
using namespace std;
class Box
{
public:
    double l,b,h,vol;
    void read();
    void cal()
    {
        vol=l*b*h;
        cout<<"\n Volume of Box = "<<vol;
    }
};
void Box::read()
{
    cout<<"\n Enter Length of Box : ";
    cin>>l;
    cout<<"\n Enter Breadth of Box : ";
    cin>>b;
    cout<<"\n Enter Height of Box : ";
    cin>>h;
}
int main()
{
    Box B1,B2;
    B1.read();
    B1.cal();
    cout<<"\nMaking New Object B2 \n";
    B2.l=10;
    B2.b=2;
    B2.h=5;
    B2.cal();
    return 0;
}
