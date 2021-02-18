#include<iostream>
using namespace std;
class AddSub
{
    public:
        AddSub(int x,int y)
        {
            cout<<"\nThis is a Parameterized Constructor"<<endl;
            int add=x+y;
            int sub=x-y;
            cout<<"\nAddition of "<<x<<" & "<<y<<" = "<<add<<endl;
            cout<<"Subtraction of "<<x<<" & "<<y<<" = "<<sub<<endl;
        }
};
int main()
{
    int a,b;
    cout<<"Enter Value of A : ";
    cin>>a;
    cout<<"Enter Value of B : ";
    cin>>b;
    AddSub a1(a,b);
    return 0;
}
