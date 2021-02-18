#include<iostream>
using namespace std;
template<class T>
void bubble(T a[])
{
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<5-i-1;j++)
        {
            if(a[i]>a[j+1])
            {
                T temp;
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
            for(int i=0;i<5;i++)
                cout<<"\n "<<a[i];
}
int main()
{
    int a[] = {5,4,3,2,1};
    float b[] = {7.7,6.6,5.5,4.4,3.3};
    cout<<"\nBefore Sorting :";
    for(int i=0;i<5;i++)
        cout<<"\n "<<a[i];
    cout<<"\nAftern Sorting :";
    bubble(a);
}
