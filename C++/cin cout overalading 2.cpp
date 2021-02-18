//cin cout overloading
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
        friend ostream& operator<<(ostream &, Employee &);
        friend istream& operator>>(istream &, Employee &);
};
istream & operator>>(istream &in, Employee &e1)
{
    cout<<"\nEnter the ID = ";
    in>>e1.idno;
    cout<<"\nEnter the Salary = ";
    in>>e1.salary;
    return (in);
}
ostream &operator<<(ostream &out, Employee &e2)
{
    out<<"\nId = "<<e2.idno;
    out<<"\nSalary = "<<e2.salary;
    return (out);
}
int main()
{
    Employee clerk;
    cin>>clerk;
    cout<<clerk;
    return 0;
}
