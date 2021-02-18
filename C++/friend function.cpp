#include<iostream>
using namespace std;
class sample
{
    int a;
    public:
        void get_a(int x)
        {
            a = x;
        }
        friend void print_a(sample);
};
void print_a(sample s1)
{
    cout<<"The Value of a = "<<s1.a;
}
int main()
{
    sample t1;
    t1.get_a(40);
    print_a(t1);
    return 0;
}
