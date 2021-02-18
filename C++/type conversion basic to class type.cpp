#include<iostream>
using namespace std;
class time
{
    int hrs,mins;
    public:
        time()
        {
            hrs=0;
            mins=0;
        }
        time(int m)
        {
            hrs=m/60;
            mins=m%60;
        }
        void display()
        {
            cout<<"\n Hours = "<<hrs;
            cout<<"\n Minutes = "<<mins;
        }
};
int main()
{
    time t1;
    int duration=128;
    t1=duration;        //type conversion from basic to class type(automatically)
    t1.display();       //t1(duration)
    return 0;
}
