/*

A Book Shop maintains the inventory of the books that are being sold in the shop. The list include details such as author,title,price,publisher and stock position. Whenever a customer want a book , the sales person inputs the title and author name and system searches the list of books and displays whether it is avlaible or not.

*/

#include<iostream>
#include<cstring>
using namespace std;
class Book
{
private:
    char *author,*title,*publisher;
    float *price;
    int *stock;
public:
    Book()
    {
        author=new char[100];
        title=new char[100];
        publisher=new char[100];
        price=new float;
        stock=new int;
    }
    Book(char *a,char*b)
    {
        char *c;
        float m;
        int d;
        cout<<"Enter the Price : ";
        cin>>m;
        cout<<"Enter the Publisher Name : ";
        cin>>c;
        cout<<"Enter the Stock Position : ";
        cin>>d;
        price=m;
        strcpy(publisher,c);
        stock=d;
        strcpy(title,b);
        strcpy(author,a);
    }
    void get_data()
    {

    }
    void display()
    {
        cout<<"Author : "<<author<<endl;
        cout<<"Title : "<<title<<endl;
        cout<<"Price : "<<price<<endl;
        cout<<"Publisher : "<<publisher<<endl;
        cout<<"Stock : "<<stock<<endl;
    }
};
int main()
{
    Book B1("Balaguruswamy","C++"),B2("Herbert","Java");
    B1.display();
    B2.display();
    return 0;
}
