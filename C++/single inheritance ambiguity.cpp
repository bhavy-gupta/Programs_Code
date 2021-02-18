#include<iostream>
#include<stdio.h>
using namespace std;
class Employee
{
    int age;
    char *name;
public:
    void get_data();
    void display();
};
class clerk:public Employee
{
    int salary;
public:
    void get_data();
    void display();
};
void Employee::get_data()
{
    cout<<"\nEnter the name = ";
    gets(name);
    cout<<"\nEnter Age = ";
    cin>>age;
}
void Employee::display()
{
    cout<<"\nName = "<<name;
    cout<<"\nAge = "<<age;
}
void clerk::get_data()
{
    cout<<"\nEnter the Salary = ";
    cin>>salary;
}
void clerk::display()
{
    cout<<"\nSalary = "<<salary;
}
int main()
{
    clerk c1;
    c1.get_data();
    c1.display();
}
