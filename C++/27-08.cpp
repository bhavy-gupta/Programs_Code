// Dynamic Constructor : It is a constructor which is used to allocate memory for the object at run time.in this constructor new and delete operator are used.
#include<iostream>
#include<cstring>
using namespace std;
class Dynamic
{
private:
    char *name;
    int length;
public:
    Dynamic()
    {
        length=0;
        name=new char[length+1];
    }
    Dynamic(char *s)
    {
        length=strlen(s);
        name=new char[length+1];
        strcpy(name,s);
    }
    void display()
    {
        cout<<"Name = "<<name<<endl;
    }
    void join(Dynamic &a,Dynamic &b)
    {
        length=a.length+b.length;
        name=new char[length+1];
        strcpy(name,a.name);
        strcat(name,b.name);
    }
};
int main()
{
    char *p="sachin";
    Dynamic name1("Kumar"),name2(p),name3("Sharma"),s1,s2;
    name1.display();
    name2.display();
    s1.join(name1,name2);
    name3.display();
    s2.join(s1,name3);
    s2.display();
    return 0;
}
