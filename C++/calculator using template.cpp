//WAP to create a simple class calculator using template.
#include<iostream>
using namespace std;
template <class T>
class calculator
{
    T num1,num2;
public:
    calculator(T m,T n)
    {
        num1 = m;
        num2 = n;
    }
    void calcresult()
    {
        cout<<"\nAddition = "<<add(num1,num2);
        cout<<"\nDivision = "<<div(num1,num2);
        cout<<"\nSubtraction = "<<sub(num1,num2);
        cout<<"\Multiplication = "<<mul(num1,num2);
    }
    T add(T m,T n)
    {
        return m+n;
    }
    T div(T m,T n)
    {
        return m/n;
    }
    T sub(T m,T n)
    {
        return m-n;
    }
    T mul(T m,T n)
    {
        return m*n;
    }
};
int main()
{
    calculator <int> clac1(80,30);
    calculator <float> clac2(95.5,40.5);
    calc1.calcresult();
    calc2.calcresult();
}
