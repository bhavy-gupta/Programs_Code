#include<iostream>
using namespace std;
class Employee
{
    private:
        int id,age;
        char name[100];
        long salary;
    public:
        void getData()
        {
            cout<<"\nEnter Employee id : ";
            cin>>id;
            cout<<"Enter Employee Name : ";
            cin>>name;
            cout<<"Enter Employee age : ";
            cin>>age;
            cout<<"Enter Employee Salary : ";
            cin>>salary;
        }
        void putData()
        {
            cout<<"\nEmployee ID : "<<id<<endl<<"Employee Name : "<<name<<endl<<"Employee Age : "<<age<<endl<<"Employee Salary : $"<<salary<<endl;
        }
};
int main()
{
    int i,n;
    cout<<"\nEnter the Number of Employees : ";
    cin>>n;
    Employee E[n];
    for(i=1;i<=n;i++)
    {
        cout<<"\nEnter the details of Employee_"<<i<<" : "<<endl;
        E[i-1].getData();
    }
    cout<<"\n\nDetails of Employee : "<<endl;
    for(i=0;i<n;i++)
    {
        E[i].putData();
    }
    return 0;
}
