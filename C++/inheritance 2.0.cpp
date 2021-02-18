#include<iostream>
using namespace std;
class person
{
    char name[30];
    int age;
    public:
    void get_data()
    {
        cout<<"\nEnter the name = ";
        cin>>name;
        cout<<"\nEnter Age = ";
        cin>>age;
    }
    void print_data()
    {
        cout<<"\nName = "<<name;
        cout<<"\nAge = "<<age;
    }
};
class student::public person
{
    int roll_no;
    char course[7];
    public:
    void read()
    {
        cout<<"\nEnter the Roll No = ";
        cin>>roll_no;
        cout<<"\nEnter the course";
        cin>>course;
    }
    void print()
    {
        cout<<"\nRoll No = "<<roll_no;
        cout<<"\nCourse = "<<course;
    }
};
int main()
{
    student s1;
    s1.get_data();          //base class
    s1.read();              //derived class
    s1.print_data();        //base class
    s1.print();             //derived class
    return 0;
}
