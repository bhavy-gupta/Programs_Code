#include<iostream>
using namespace std;
class Time
{
private:
    int hrs,mins;
public:
    Time()
    {
        hrs=0;
        mins=0;
    }
    Time(int m)
    {
        hrs=m/60;
        mins=m%60;
    }
    void display()
    {
        cout<<"Hours = "<<hrs<<endl;
        cout<<"Minutes = "<<mins<<endl;
    }
};
int main()
{
    Time T1;
    T1.display();
    Time T2(365);
    T2.display();
    Time T3;
    //int duration=128;
    //t3=duration;
    T3=1278;
    T3.display();
    return 0;
}
