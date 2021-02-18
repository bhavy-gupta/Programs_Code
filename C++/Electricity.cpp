#include<iostream>
#include<string>
using namespace std;
class Electricity
{
private:
    string name;        // It should be String.
    int units;
    float total=50;
public:
    int input()
    {
        cout<<"Enter Name Of Customer : ";
        getline(cin,name);
        cout<<"Enter No. of Units Consumed : ";
        cin>>units;
        return 1;
    }
    int calculate()
    {
        if(units<=100)
        {
            total+=0.60*units;
        }
        else if(units>100&&units<=200)
        {
            total+=0.80*units;
        }
        else if(units>200&&units<=300)
        {
            total+=0.90*units;
        }
        else
        {
            total+=1.00*units;
        }
        if(total>300)
        {
            total+=(total*15/100);
        }
        return 1;
    }
    int display()
    {
        cout<<"\nName of Consumer : "<<name;
        cout<<"\nUnits Consumed : "<<units;
        cout<<"\nBill Amount : Rs. "<<total;
        cout<<"\n";
        return 1;
    }
};
int main()
{
    Electricity E1;
    E1.input();
    E1.calculate();
    E1.display();
}
