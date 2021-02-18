#include<iostream>
#include<cstring>
using namespace std;
class String
{
private:
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
        cout<<"String = "<<p<<endl;
    }
};
int main()
{
    String S1,S2;
    char *name1="Bhavy";
    char *name2="Gupta";
    S1=String(name1);       //Type Casting
    S2=name2;               //Type Casting
    S1.display();
    S2.display();
    return 0;
}
