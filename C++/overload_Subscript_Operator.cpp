#include<iostream>
using namespace std;
class Iarray
{
private:
    char *name;
    int sizee;
public:
    Iarray()
    {
        sizee=0;
        name=new char[sizee+1];
    }
    Iarray(int s)
    {
        sizee=s;
        name=new char[sizee+1];
    }
    void operator[](int index)
    {
        if(index>=0&&index<=5)
            cout<<"Array is bound in"<<endl;
        else
            cout<<"Array is out of Bound"<<endl;
    }
};
int main()
{
    Iarray I(10);
    int b;
    cout<<"Enter the Range"<<endl;
    cin>>b;
    for(int i=0;i<=b;i++)
        I[i];
    return 0;
}
