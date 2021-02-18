/*
Copy Constructor : It is a Constructor which takes reference object of same class of itself as an argument is known as Copy Constructor.

    integer(integer &i);
    integer i1(6,8);
    integer i2(i1);
    i1.display();   6,7
    i2.display();   6,7

*/

#include<iostream>
using namespace std;
class Copy
{
private:
    int id;
public:
    Copy()
    {
        id=0;
    }
    Copy(int a)
    {
        cout<<"Parameterized"<<endl;
        id=a;
    }
    Copy(Copy &x)
    {
        cout<<"Copy Constructor"<<endl;
        id=x.id;
    }
    void display()
    {
        cout<<"id = "<<id<<endl;
    }
};
int main()
{
    Copy A(300);    //Parameterized Constructor
    Copy B(A);      //Copy Constructor
    Copy C=A;       //Copy Constructor
    A.display();
    B.display();
    C.display();
    return 0;
}
