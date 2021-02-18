#include<iostream>
#include<cstring>
using namespace std;
class Str
{
private:
    char *name;
    int len;
public:
    Str()
    {
        len=0;
        name = new char[len+1];
    }
    Str(char *s1)
    {
        len=strlen(s1);
        name=new char[len+1];
        strcpy(name,s1);
    }
    void display()
    {
        cout<<"Name = "<<name<<endl;
    }
    friend Str operator+(Str &s1,Str &s2);
};
Str operator+(Str &s1,Str &s2)
{
    Str temp;
    temp.len=s1.len+s2.len;
    temp.name=new char[temp.len+1];
    strcpy(temp.name,s1.name);
    strcat(temp.name,s2.name);
    return temp;
}
int main()
{
    Str s1("Sachin"),s2("Sharma"),s3;
    s1.display();
    s2.display();
    s3=s1+s2;
    s3.display();
    return 0;
}
