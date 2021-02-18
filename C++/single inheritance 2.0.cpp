#include<iostream>
using namespace std;
class Employee
{
public:
    int salary;
};
class clerk:public Employee
{
public:
    void print()
    {

        cout<<"\nEnter the Salary = ";
        cin>>salary;
        cout<<"\nSalary = ">>salary;
    }
};
int main()
{
    clerk c1;
    c1.print();
    return 0;
}
