#include<iostream>
using namespace std;
class ABC
{
private:
    int a,b,c;
    int get_a()
    {
        cout<<"\nEnter the value of a = ";
        cin>>a;
        return a;
    }
public:
    void get_ab()
    {
        cout<<"Enter the value of b = ";
        cin>>b;
        c = get_a()*b;
        cout<<"\n c = "<<c;
    }
};
int main()
{
    ABC a1;
    a1.get_ab();
    return 0;
}
