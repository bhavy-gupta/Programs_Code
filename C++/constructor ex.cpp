//constructor
#include<iostream>
using namespace std;
class item
{
    int code, price;
public:
    item();
    void display()
    {
        cout<<"\n Item Code = "<<code;
        cout<<"\n Item Price = "<<price<<"\n";
    }
};
item::item()
{
        cout<<"\nEnter the code = ";
        cin>>code;
        cout<<"\nEnter the price = ";
        cin>>price;
}
int main()
{
    item t1;
    t1.display();
    return 0;
}
