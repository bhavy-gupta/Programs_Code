#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char input[100];
    fstream file;
    file.open("file.txt", ios::out | ios::in);
    for (int i = 0; i < 10; i++)
    {
        cin.getline(input, sizeof(input));
        file << input << endl;
    }
    string s;
    while (getline(file, s))
    {
        cout << s << endl;
    }

    file.close();

    return 0;
}
