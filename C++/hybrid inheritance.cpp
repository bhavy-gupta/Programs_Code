// HYBRID INHERITANCE
#include<iostream>
using namespace std;
class student
{
protected:
    int roll_no;
public:
    void getrollno(int a)
    {
        roll_no = a;
    }
    void printrollno()
    {
        cout<<"\nRoll No = "<<roll_no;
    }
};
class marks:public student
{
protected:
    int m1,m2;
public:
    void getmarks(int m, int n)
    {
        m1 = m;
        m2 = n;
    }
    void printmarks()
    {
        cout<<"\nMarks of m1 = "<<m1;
        cout<<"\nMarks of m2 = "<<m2;
    }
};
class sports
{
protected:
    int sm;
public:
    void getsm(int k)
    {
        sm = k;
    }
    void printsm()
    {
        cout<<"\nSports Marks = "<<sm;
    }
};
class result:public marks, public sports
{
    int total;
public:
    void display()
    {
        total = m1+m2+sm;
        cout<<"\nTotal = "<<total;
    }
};
int main()
{
    result r1;
    r1.getrollno(1122);
    r1.getmarks(70,80);
    r1.getsm(75);
    r1.printrollno();
    r1.printmarks();
    r1.printsm();
    r1.display();
    return 0;
}
