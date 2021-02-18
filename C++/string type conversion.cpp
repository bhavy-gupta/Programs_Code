//Assign string to object
#include<string>
#include<iostream>
using namespace std;
class String
{
    char *p;
    int len;
    public:
        String()
        {
            len=0;
            p=new char[len+1];
        }
        String(char *s)
        {
            len=strlen(s);
            p=new char[len+1];
            strcpy(p,s);
        }
        void display()
        {
            cout<<"\nString = "<<p;
        }
};
int main()
{
    String s1,s2;
    char *name1="Devendra";
    char *name2="Sharma";
    s1=String(name1);       //Type casting (char * -> String and then assign it to object)
    s2=name2;               //Type casting (it invokes a parameterized constructor)
    s1.display();
    s2.display();
    return 0;
}
