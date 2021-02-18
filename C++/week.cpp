//week
#include<iostream>
using namespace std;
int choice;
enum week
{
    monday, tuesday, wednesday, thursday, friday, saturday, sunday
};
int main()
{
    cout<<"Enter the choice = ";
    cin>>choice;
    choice--;
    switch(choice)
    {
    case monday:
        cout<<"\nMonday\n";
        break;
    case tuesday:
        cout<<"\nTuesday\n";
        break;
    case wednesday:
        cout<<"\nWednesday\n";
        break;
    case thursday:
        cout<<"\nThursday\n";
        break;
    case friday:
        cout<<"\nFriday\n";
        break;
    case saturday:
        cout<<"\nSaturday\n";
        break;
    case sunday:
        cout<<"\nSunday\n";
        break;
    default:
        cout<<"Invalid Choice\n";
    }
    return 0;
}
