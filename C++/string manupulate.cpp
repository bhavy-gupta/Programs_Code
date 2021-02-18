#include<iostream>
#include<String.h>
using namespace std;
class String
{
    char name[25];
    public:
        void getstring();
        void putstring();
        void display();
        String operator+(String &);
        int operator==(String &);
        void operator+=(String &);

};
void String::getstring()
{
    cout<<"Enter Strng = ";
    cin<<name;
}
void String::putstring(String &s1)
{
    int len=strlen(s1.name);
    cout<<"\n Length = "<<len;
}
void String::display()
{
    cout<<"\nName = "<<name;
}
String String::operator+(String &s1)
{
    String temp;
    if(strlen(name)+strlen(s1.name)<25)
    {
        strcpy(temp.name,name);
        strcat(temp.name,s1.name);
    }
    else
    {
        cout<<"\nConcaternayion is not Possible";
    }
    return temp;
}
int String::operator==(String &s1)
{
    return(strcmp(name,s1.name)==0?1:0)
}
void String::operator+=(String &s1)
{
    strcat(name,s1.name);
}
int main()
{
    String s1,s2,s3,s4;
    s1.getstring();
    s2.getstring();
    s1.display();
    s2.display();
    s1.putstring(s1);
    s2.putstring(s2);
    s3=s1+s2;
    s3.display();
    if(s1==s2)
        cout<<"Equal";
    else
        cout<<"Not Equal";
    s1=s2;
    s1.display();
    s2+=s3;
    s3.display()
}
