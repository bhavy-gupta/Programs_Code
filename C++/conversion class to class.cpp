//class to class
#include<iostream>
#include<string>
using namespace std;
class string2;
class string1
{
    string name1;
    public:
        string1()
        {
            cin>>name1;
        }
        string getstring()
        {

            return name1;
        }
        void display()
        {
            cout<<"\n name1 = "<<name1;
        }
};
class string2
{
    char name2;
    public:
        void operator=(string1 m1)
        {
            name2=m1.getstring();
            //strcpy(name2,m1.getstring());
        }
        void show()
        {
            cout<<"\n name2 = "<<name2;
        }
};
int main()
{
    string1 n;
    n.display();
    string2 p;
    p=n;            //type conversion
    p.show();
    return 0;
}
