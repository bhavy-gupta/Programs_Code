//hour to minutes
#include<iostream>
using namespace std;
class hour;
class minutes
{
    int h;
    public:
        void operator=(minutes t)
        {
            h=t.getminutes()/60;
        }
        void display()
        {
            cout<<"Hours = "<<h;
        }
};
class hour
{
    int m;
    public:
        minutes()
        {

        }
        minutes(int p)
        {
            m=p
        }
        int getmiutes()
        {
            return m;
        }
        void show()
        {
            cout<<"\nMinutes = "<<m;
        }
};
int main()
{
    minutes m1(250);
    hours h1;
    m1.show();
    h1=m1;
    m1.show();
    return 0;
}
