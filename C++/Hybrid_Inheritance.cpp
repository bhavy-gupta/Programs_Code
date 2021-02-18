#include<iostream>
using namespace std;
class Student
{
protected:
    int roll_no;
public:
    void getrollno(int a)
    {
        roll_no=a;
    }
    void printrollno()
    {
        cout<<"Roll No.: "<<roll_no<<endl;
    }
};
class Marks : public Student
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
        cout<<"Marks of M1 = "<<m1<<endl;
        cout<<"Marks of M2 = "<<m2<<endl;
    }
};
class Sports
{
    protected:
    int sm;
    public:
    void getsm(int k)
    {
        sm=k;
    }
    void printsm()
    {
        cout<<"Sports Marks = "<<sm<<endl;
    }
};
class Result:public Marks,public Sports
{
    int total;
    public:
    void display()
    {
        total=m1+m2+sm;
        cout<<"Total Marks = "<<total<<endl;
    }
};
int main()
{
    Result r1;
    r1.getrollno(1120);
    r1.getmarks(70,80);
    r1.getsm(75);
    r1.printrollno();
    r1.printmarks();
    r1.printsm();
    r1.display();
    return 0;

}