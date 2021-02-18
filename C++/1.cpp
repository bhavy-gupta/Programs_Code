#include <iostream>
using namespace std;
int main()
{
    int arr[100];
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 10; i++)
    {
        int temp = arr[i] ^ 2 + 7 - 2 * arr[i] / 10 * (1 + 2);
        cout << temp << endl;
    }
}