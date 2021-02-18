//constructor overloading
#include<iostream>
using namespace std;
class deposite
{
    long p;
    int t;
    float r, a;
    public:
        deposite()
        {
            p = 0;
            t = 0;
            r = 0;
        }
        deposite(long x, int y, float z)
        {
            p = x;
            t = y;
            z = r;
            a = (p * r * t)/100;

        }
        deposite(long x, int y, int z = 5)
        {
            p = x;
            t = y;
            r = z;
            a = (p * r * t)/100;
        }
        void display(){
            cout << "p = "<< p;
            cout << "\nA = "<<a;
        }
};
int main()
{
   // deposite d1;
    long m;
    int n;
    float r;
    int R;
    cout << "\n Enter the Values of p, r ,t";
    cin >>m>>t>>r;
    deposite d1(m,n,r);
    d1.deposite();
    cout<<"Enter the values of P, T, R = ";
    cin>>m>>n>>r;
    deposite d2(m,n,R);
    d2.display();
    deposite d3(5000, 5);
    d3.display();
    return 0;
}


// WAP to create a class Complex which having three constructor like
// 1. complex::complex()
// 2. complex::complex(int)
// 3. complex::complex(int,int)
// data member: real, imaginary of type int
// show the value of data members real and imaginary using member function display()
