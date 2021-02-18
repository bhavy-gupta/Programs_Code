//Class to class type conversion
#include<iostream>
using namespace std;
class invent2;          //Forward Declaration
class invent1
{
    int code,items;
    float price;
    public:
        invent1()
        {
            code=items=price=0;
        }
        invent1(int a,int b,float c)
        {
            code=a;
            items=b;
            price=c;
        }
        void display()
        {
            cout<<"\nCode = "<<code;
            cout<<"\nItems = "<<items;
            cout<<"\nPrice = "<<price;
        }
        int getcode()
        {
            return code;
        }
        int getitems()
        {
            return items;
        }
        float getprice()
        {
            return price;
        }
        operator float()
        {
            return (items*price);
        }
      /**  operator intvent2()
        {
            invent2 temp;
            temp.code=code;
            temp.value=price*items;
            return temp;
        }**/
};
class invent2
{
    int code;
    float value;
    public:
        invent2()
        {
            code=value=0;
        }
        invent2(int x,float y)
        {
            code=x;
            value=y;
        }
        void putdata()
        {
            cout<<"\nCode = "<<code;
            cout<<"\nValue = "<<value;
        }
        invent2(invent1 p)
        {
            code=p.getcode();
            value=p.getitems()*p.getprice();
        }
};
int main()
{
    invent1 s1(100,5,140.0);
    invent2 d1;
    float total_value;
    total_value=s1;         //class to basic data type conversion
    d1=s1;                  //class to class type conversion
    cout<<"\nDetail of invent1 class :\n";
    s1.display();
    cout<<"\nStock value :\n";
    cout<<"\ntotal value = "<<total_value;
    cout<<"\nDetail of invent2 class :\n";
    d1.putdata();
    return 0;
}
