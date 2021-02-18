
//  COPY CONSTTRUCTOR - A Constructor which take reference object of same class of itself as an argument is known as Copy Constructor.

#include<iostream>
using namespace std;
class code
{
    int id;
public:
    code()
    {
        id = 0;
    }
    code(int a)
    {
        id = a;
    }
    code(code &x)
    {
        id = x.id;
    }
    void display()
    {
        cout<<"\n id = "<<id;
    }

};
int main()
{
    code A(300);
    code B(A);      //COPT
    code C = A;     //COPY CONSTRUCTOR CALLED
    code D;
    D = A;          //COPY INITIALIZATION
    A.display();
    B.display();
    C.display();
    D.display();
}
