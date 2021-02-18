#include<iostream>
using namespace std;
class Rect
{
private:
    int len,br,area;
public:
    void getdata(int x,int y)
    {
        len=x;
        br=y;
    }
    void calculate()
    {
        area=len*br;
        cout<<"Area = "<<area;
    }
};
int main()
{
    Rect R1;
    int m,n;
    cout<<"Enter Length of Rectangle : ";
    cin>>m;
    cout<<"Enter Breadth of Rectangle : ";
    cin>>n;
    R1.getdata(m,n);
    R1.calculate();
    return 0;
}
