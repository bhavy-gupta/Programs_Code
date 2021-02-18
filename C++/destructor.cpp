#include<iostream>
using namespace std;
int count = 0;
class alpha
{
    public:
        alpha()
        {
            count++;
            cout<<"\n No. of objects created = "<<count;
        }
        ~alpha()
        {
            cout<<"\n No. of object destructor = "<<count;
            count--;
        }
};
int main()
{
    cout<<"\n We are in main function";
    alpha a1,a2,a3,a4;
    {
        cout<<"\n We are in block 1";
        alpha a5;
    }
    {
        cout<<"\n we are in Block 2";
        alpha a6;
        {
            cout<<"\n We are in inner block of block 2";
            alpha a7;
        }
    }
    cout<<"\n we are in main function again";
    return 0;
}
