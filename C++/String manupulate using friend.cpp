#include<iostream>
#include<string.h>
using namespace std;
class String
{
    char *name;
    int len;
    public:
        String()
        {
            len = 0;
            name = new char[len+1];
        }
        String(char *s1)
        {
            len = strlen(s1);
            name = new char[len+1];
            strcpy(name,s1);
        }
        friend void display(String s1)
        {
            cout<<"\nName = "<<s1.name;
        }
        friend String operator+(String,String);
};
String operator+(String s1,String s2)
{
    String temp;
    temp.len=strlen(s1.name)+strlen(s2.name);
    temp.name=new char[temp.len+1];
    strcpy(temp.name,s1.name);
    strcat(temp.name,s2.name);
    return temp;
}
int main()
{
    String s1("Devendra"),s2("Sharma"),s3;
    display(s1);
    display(s2);
    s3=s1+s2;
    display(s3);
    return 0;
}
