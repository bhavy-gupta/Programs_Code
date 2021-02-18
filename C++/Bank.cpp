#include<iostream>
using namespace std;
class Bank
{
private:
    int acc_no;
    char name[30];
    char acc_type[30];
    float balance;
    float amt;
public:
    void input()
    {
        cout<<"\nEnter the Account Nummber : ";
        cin>>acc_no;
        cout<<"\nEnter the Name : ";
        cin>>name;
        cout<<"\nEnter the Account Type : ";
        cin>>acc_type;
        balance=500;
        cout<<"\nBalance : Rs."<<balance<<endl;
    }
    void deposit()
    {
        cout<<"\nEnter the amount to be Deposit : ";
        cin>>amt;
        balance+=amt;
        cout<<"\nUpdated Balance : "<<balance<<endl;
    }
    void withdrawl()
    {
        cout<<"\n\nEnter the amount to be Withdrawl : ";
        cin>>amt;
        if((balance-amt)<=500)
            cout<<"\nInsufficient Amount in your Account."<<endl;
        else
        {
            balance-=amt;
            cout<<"\nUpdated Balance : "<<balance<<endl;
        }
    }
    void checkbalance()
    {
        cout<<"\nAvailable Balance : "<<balance<<endl;
    }
    void display()
    {
        cout<<"\n\nAccount Holder Name : "<<name;
        cout<<"\nAccount Number : "<<acc_no;
        cout<<"\nAccount Type : "<<acc_type;
        cout<<"\nAvailable Balance : "<<balance<<endl;
    }
};
int main()
{
    int ch,i=1;
    Bank b1;
    b1.input();
    while(i==1)
    {
       cout<<"\n Press 1 to deposit Money. \n Press 2 to Withdraw Money. \n Press 3 to check Balance. \n Press 4 to display Account Details."<<endl<<"\n Enter your Choice : ";
        cin>>ch;
        switch(ch)
        {
            case 1:
                b1.deposit();
                break;
            case 2:
                b1.withdrawl();
                break;
            case 3:
                b1.checkbalance();
                break;
            case 4:
                b1.display();
                break;
            default:
                cout<<"Invalid Input"<<endl;
        }  
        cout<<"\n Press 1 to continue or anyother number to exit. ";
        cin>>i;
    }
    cout<<"\n Thanks For Banking with us!!!"<<endl;
    return 0;
}
