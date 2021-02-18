//Book Store
#include<iostream>
#include<String.h>
using namespace std;
class book
{
    char *author, *title, *pub;
    float price;
    int stock,l;
    public:
        book()
        {

        }
        book(char *a, char *b)
        {
            l=strlen(a);
            author=new char[l+1];
            strcpy(author,a);
            l=strlen(b);
            title=new char[l+1];
            strcpy(title,b);
            price=600;
            pub="TMH";
            stock=80;
        }
        void display()
        {
            cout<<"\nAuthor = "<<author;
            cout<<"\nTitle = "<<title;
            cout<<"\nPrice = "<<price;
            cout<<"\nPublisher = "<<pub;
            cout<<"\nStock = "<<stock;
        }
};
int main()
{
    book b1("Balaguru Swami","C++"), b2("Kanitkar","C");
    b1.display();
    b2.display();
    return 0;
}
