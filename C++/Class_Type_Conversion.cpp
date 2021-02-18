#include<iostream>
using namespace std;
class Invent2;
class Invent1
{
private:
    int code,items;
    float price;
public:
    Invent1()
    {
        code=items=price=0;
    }
    Invent1(int a,int b,float c)
    {
        code=a;
        items=b;
        price=c;
    }
    void display()
    {
        cout<<"Code = "<<code<<endl;
        cout<<"Items = "<<items<<endl;
        cout<<"Price = "<<price<<endl;
    }
    int get_code()
    {
        return code;
    }
    int get_items()
    {
        return items;
    }
    float get_price()
    {
        return price;
    }
    operator float()
    {
        return(items*price);
    }
    /*operator Invent2()
    {
        Invent2 temp;
        temp.code=code;
        temp.value=price*items;
        return temp;
    }*/
};
class Invent2
{
private:
    int code;
    float value;
public:
    Invent2()
    {
        code=value=0;
    }
    Invent2(int x,float y)
    {
        code=x;
        value=y;
    }
    void put_data()
    {
        cout<<"Code = "<<code<<endl;
        cout<<"Value = "<<value<<endl;
    }
    Invent2(Invent1 p)
    {
        code=p.get_code();
        value=p.get_items()*p.get_price();
    }
};
int main()
{
    Invent1 S1(100,5,140.0);
    Invent2 D1;
    float total_val;
    total_val=S1;       //class to basic data type Conversion.
    D1=S1;              //Class to class data type Conversion.
    cout<<"Details of Invent 1 Class :\n "<<endl;
    S1.display();
    cout<<"Stock Value = "<<total_val<<endl;
    cout<<"Details of Invent 2 Class = "<<endl;
    D1.put_data();
    return 0;
}
