#include<iostream>
#include<conio.h>
using namespace std;
class ObjectSum
{
    private:            //data members of class ObjectSum
        int a,b,sum;
    public:             //member functions of class ObjectSum
        void get_data()
        {
            cout<<"Enter the Values of a & b :";
            cin>>a>>b;
        }
        void calculate()
        {
            sum=a+b;
        }
        void display()
        {
            cout<<"Sum of a & b :"<<sum;
        }
};
int main()
{
    ObjectSum s1;
    s1.get_data();
    s1.calculate();
    s1.display();
    return 0;
}
