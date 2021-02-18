#include<iostream>
#include<cstring>
using namespace std;
class media
{
protected:
    char *author_name;
    float cost;
    int l;
public:
    media(char *s,float m)
    {
        int l = strlen(s);
        author_name = new char[l+1];
        strcpy(author_name,s);
        cost = m;

    }
    virtual void display() = 0;
};
class magzine:public media
{
    int pages;
public:
    magzine(char *s,float m,int n):media(s,m)
    {
        pages = n;
    }
    void display()
    {
        cout<<"\nAuthor = "<<author_name;
        cout<<"\nCost = "<<cost;
        cout<<"\nPages = "<<pages;

    }
};
class tape:public media
{
    float duration;
public:
    tape(char *s,float m,float n):media(s,m)
    {
        duration = n;
    }
    void display()
    {
        cout<<"\nAuthor = "<<author_name;
        cout<<"\nCost = "<<cost;
        cout<<"\nDuration= "<<duration;
    }
};
int main()
{
    media *bptr;
    magzine m1("Digital World",70,100);
    tape t1("Forbes",90,320);
    bptr = &m1;
    bptr->display();
    bptr = &t1;
    bptr->display();
    return 0;
}
