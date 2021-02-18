#include<iostream>
using namespace std;
enum day
{
    monday=1,tuesday,wednesday,thursday,friday,saturday,sunday
};
int main()
{
    int code;
    cout<<"\n Enter the code 1-7 : ";
    cin>>code;
    switch(code)
    {
    case monday:
        cout<<"\nYou have Selected Weekday";
        break;
    case tuesday:
        cout<<"\nYou have Selected Weekday";
        break;
    case wednesday:
        cout<<"\nYou have Selected Weekday";
        break;
    case thursday:
        cout<<"\nYou have Selected Weekday";
        break;
    case friday:
        cout<<"\nYou have Selected Weekday";
        break;
    case saturday:
        cout<<"\nYou have Selected Weekend";
        break;
    case sunday:
        cout<<"\nYou have Selected Weekend";
        break;
    default:
        cout<<"Enter Valid Code!!!";
        break;
    }
    cout<<"\n";
    return 0;
}
