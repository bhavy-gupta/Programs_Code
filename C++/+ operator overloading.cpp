// + operator overloading
#include<iostream>
using namespace std;
class Employee
{
    int idno;
    double salary;
    public:
        Employee()
        {
            idno=0;
            salary=0;
        }
        Employee(int id,double sal)
        {
            idno=id;
            salary=sal;
        }
        double addTwo(Employee &e1)
        {
            double sum;
            sum=salary + e1.salary;
            return sum;
        }
        double operator+(Employee &e2)
        {
            double sum;
            sum=salary + e2.salary;
            return sum;
        }
        void display()
        {
            cout<<"\nSalary = "<<salary;
        }
};
int main()
{
    Employee clerk(222,560.5), driver(444,234.5);
    double sum;
    clerk.display();
    driver.display();
    sum=clerk.addTwo(driver);
    cout<<"\nBy addTwo Function Sum = "<<sum;
    sum=clerk.operator+(driver);
    cout<<"\nUsing operator+ function Sum = "<<sum;
    sum=clerk+driver;           //operator overloading
    cout<<"\nUsing + Operator = "<<sum;
    return 0;
}
