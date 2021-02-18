#include<iostream>
#include<string.h>
using namespace std;
class String
{
    char *name;
    int length;
    public:
        String()
        {
            length = 0;
            name = new char[length + 1];
        }
        String(char *s)
        {
            length = strlen(s);
            name = new char[length + 1];
            strcpy(name,s);
        }
        void display()
        {
            cout<<"\n Name = "<<name;
        }
        void join(String &, String &);
};
void String::join(String &a, String &b)
{
    length = a.length + b.length;
    name = new char(length + 1);
    strcpy(name,a.name);
    strcat(name,b.name);
}
int main()
{
    char *p = "Devendra";
    String name1(p),name2("Kumar"), name3("Sharma"), s1, s2;
    name1.display();
    name2.display();
    s1.join(name1, name2);
    s1.display();
    name3.display();
    s2.join(s1, name3);
    s2.display();
    return 0;
}
