#include<iostream>
using namespace std;
class time
{
private:
    int hr,mnt;
public:
    void getvalue(int x, int y)
    {
        hr = y;
        mnt = y;
    }
    void display()
    {
        cout<<"\n"<<hr<<"Hours and ";
        cout<<mnt<<"minutes";
    }
    void sum(time t1, time t2)
    {
        hr = t1.hr + t2.hr;
        mnt = t1.mnt + t2.mnt;
    }
};
int main()
{
    time m1,m2,m3;
    m1.getvalue(10,40);
    m1.display();
    m2.getvalue(11,45);
    m3.sum(m1,m2);
    m3.display();
    return 0;
}
