#include<iostream>
using namespace std;
class student
{
    int roll_no;
public:
    void get_rollno(int m)
    {
        roll_no=m;
    }
    void print_rollno()
    {
    cout<<"Roll no="<<roll_no<<endl;
    }
};
class marks:public student
{
protected:
    int m1,m2;
public:
    void getmarks(int m,int n)
    {
        m1=m;
        m2=n;
    }
    void printmarks()
    {
        cout<<"m1="<<m1<<endl;
        cout<<"m2="<<m2<<endl;
    }
};
class result:public marks
{
    int total;
    float avg;
public:
    void display()
    {
        total=m1+m2;
        avg=total/2;
        print_rollno();
        printmarks();
        cout<<"per="<<avg<<endl;
    }
};
int main()
{
    result r1;
    r1.get_rollno(1001);
    r1.getmarks(62,98);
    r1.display();
    return 0;
}
