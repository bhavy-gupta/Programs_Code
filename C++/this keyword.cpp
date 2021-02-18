//WAP to show the use of this pointer
#include<iostream>
#include<string.h>
using namespace std;
class person
{
    char name[20];
    float age;
public:
    person()
    {

    }
    person(char *s,float a)
    {
        strcpy(name,s);
        age = a;
    }
    person greater(person&);
    void display()
    {
        cout<<"Name = "<<name<<endl;
        cout<<"Age = "<<age<<endl;
    }
};
person person::greater(person & x)
{
    if(x.age>age)
        return x;
    else
        return *this;
}
int main()
{
    person p1("Devendra",50),p2("Sachin",67);
    p1.display();
    p2.display();
    person p3;
    p3 = p1.greater(p2);
    p3.display();
    return 0;
}
