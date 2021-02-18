#include<iostream>
using namespace std;
class Box
{
    public:
    double ht,bth,len,vol;
    void read();
    void calc()
    {
        vol = ht*bth*len;
        cout<<"\nVolume = "<<vol;
    }

};
void Box::read()
{
    cout<<"Enter the three Dimensions = ";
    cin>>ht;
    cin>>bth;
    cin>>len;
}
int main()
{
    Box B1;
    B1.ht=10;
    B1.bth=20;
    B1.len=20.5;
    B1.calc();
    return 0;
}
