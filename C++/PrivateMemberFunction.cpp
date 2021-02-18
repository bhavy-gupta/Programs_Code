//WAP to demonstrate the process of calling Private Member Function
#include<iostream>
using namespace std;
class Member
{
private:
    int a,b=10,c;
    int get_a()
    {
        cout<<"\n Enter Value of a : ";
        cin>>a;
        return a;
    }
public:
    void get_ab()
    {
        c=get_a()+b;
        cout<<"\n c = "<<c;
    }
};
int main()
{

    Member M1;
    M1.get_ab();
    return 0;
}
