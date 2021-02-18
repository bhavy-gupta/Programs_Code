#include<iostream>
#include<string.h>
using namespace std;
class String
{
    char *p;
    int length;
    public:
        String()
        {
            length=0;
            p=new char[length+1];
        }
        String(char *s)
        {
            length=strlen(s);
            p=new char[length+1];
            strcpy(p,s);
        }
        ~String()
        {
            cout<<"\nMemory of Pointer Destroyed \n";
            delete p;
        }
        void display()
        {
            cout<<"Name = "<<p;
        }
};
int main()
{
    String s1("Devendra Sharma");
    s1.display();
    return 0;
}
