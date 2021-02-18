//calculator
#include<iostream>
using namespace std;
int main()
{
    int a,b,x,result,choice;
    while(x!=4)
    {
        cout<<"Enter a = ";
        cin>>a;
        cout<<"Enter b = ";
        cin>>b;
        cout<<"Select the operation you want to perform\n 1 for Addition\n 2 for Subtraction\n 3 for Multiplication\n 4 for Division\n";
        cin>>choice;
        switch(choice)
        {
        case 1:
            result = a + b;
            cout<<"Addition = "<<result;
            break;
        case 2:
            result = a - b;
            cout<<"Subtraction = "<<result;
            break;
        case 3:
            result = a * b;
            cout<<"Multiplication = "<<result;
            break;
        case 4:
            result = a / b;
            cout<<"Division = "<<result;
            break;
        default:
            cout<<"Invalid Choice\n";
            break;
        }
            cout<<"For Continue Press : ";
            cin>>x;
    }
    return 0;
}
