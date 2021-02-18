#include <iostream>
using namespace std;

void special(int n)
{
    int num, digit, rev = 0;

    num = n;

    do
    {
        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;
    } while (num != 0);

    if (n == rev)
        cout << " The number is a Special.";
    else
        cout << " The number is not a Special.";
}

int main()
{
    int num;
    cout << "Enter a 4-Digit number: ";
    cin >> num;
    special(num);

    return 0;
}