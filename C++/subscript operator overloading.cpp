#include<string>
#include<iostream>
using namespace std;
class iarray
{
    char *name;
    int size;
    public:
        iarray()
        {
            name=new char[size+1];
            size=0;
        }
        iarray(int s,char *n)
        {
            strcpy(name,n);
            size=s;
            name=new char[size+1];
        }
        void operator[](int);
};
char iarray::operator[](int index)
{
    if(index >= 0 && index <= 5)
        return name[index];//cout<<"\nArray is bound in";
    else
        rerurn 0;//cout<<"\nArray is out of bound";
}
int main()
{
    iarray I(10,"Devendra");
    int b;
    cout<<"\nEnter the range = ";
    cin>>b;
    for(int i=0;i<=b;i++)
        cout<<I[i];       //I.operator[](i);
    return 0;
}
