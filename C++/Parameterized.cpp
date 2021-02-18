#include<iostream>
using namespace std;
class Factorial
{
    public:
        Factorial(int x)
        {
            int fact=1;
            for(int i=1;i<=x;i++)
            {
                fact=fact*i;
            }
            cout<<"Factorial of "<<x<<" = "<<fact<<endl;
        }
};
int main()
{
    Factorial F1(5),F2(12);
    return 0;
}
