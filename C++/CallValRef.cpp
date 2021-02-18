#include<iostream>
using namespace std;
class Swap
{
    public:
        void swap_value(int a,int b)
        {
            int temp=a;
            a=b;
            b=temp;
            cout<<" a = "<<a<<" b = "<<b<<endl;
        }
        void swap_reference(int &a,int &b)
        {
            int temp=a;
            a=b;
            b=temp;
            cout<<" a = "<<a<<" b = "<<b<<endl;
        }
};
int main()
{
    int x,y;
    cout<<"Enter Value of X : ";
    cin>>x;
    cout<<"Enter Value of Y : ";
    cin>>y;
    cout<<"\nSwapping values Using call by Value Method : "<<endl;
    Swap s1;
    s1.swap_value(x,y);
    cout<<" X = "<<x<<" Y = "<<y<<endl;
    cout<<"\nSwapping values Using call by Reference Method : "<<endl;
    Swap s2;
    s2.swap_reference(x,y);
    cout<<" X = "<<x<<" Y = "<<y<<endl;
    return 0;
}
