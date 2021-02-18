//Wap to demonstrate the use of Static data Members and Member Functions.
/*
#include<iostream>
using namespace std;
class Static
{
    int num;
    static int count;
public:
    void input()
    {
        num=++count;
    }
    void display()
    {
        cout<<"\n Num = "<<num<<endl;
        cout<<"\n Count = "<<count<<endl;
    }
};
int Static::count;
int main()
{
    Static A1,B1,C1;
    A1.input();
    B1.input();
    C1.input();
    A1.display();
    B1.display();
    C1.display();
    return 0;
}
*/
#include<iostream>
using namespace std;
class Static
{
    int num;
    static int count;
public:
    void show_num()
    {
        num=++count;
        cout<<"\n Num = "<<num<<endl;
    }
    static void show_count()
    {
        cout<<"\n Count = "<<count<<endl;
    }
};
int Static::count;
int main()
{
    Static A1,B1,C1;
    A1.show_num();
    B1.show_num();
    C1.show_num();
    Static::show_count();
    return 0;
}
