#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int input[100];
    fstream file;
    file.open("file.txt",ios::out|ios::in);
    for(int i=0;i<10;i++){
        cin.getline(input,sizeof(input));
        file<<input<<endl;
    }
    file >> input;
  cout << input << endl;
    
    
    file.close();
    return 0;
    
}