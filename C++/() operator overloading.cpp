//Overloading () operator
#include<iostream>
#include<string>
using namespace std;
class book
{
    char *title;
    int len;
    double cost;
    public:
        book()
        {
            len = 0;
            title = new char[len+1];
            cost=0;
        }
        book(char *s, double t)
        {
            len=strlen(s);
            title=new char[len+1];
            strcpy(title,s);
            cost=t;
        }
        void display()
        {
            cout<<"\nTitle = "<<title;
            cout<<"\nCost = "<<cost;
        }
        void operator()(char *p,double h)
        {
            len=strlen(p);
            title=new char[len+1];
            strcpy(title,s);
            cost=h;
        }
};
int main()
{
    book b1("C++",600);
    b1.display();
    b1("programming in c++",700);           //overloading () operator
    b1.display();
    return 0;
}
