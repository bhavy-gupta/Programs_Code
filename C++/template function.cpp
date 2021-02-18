#include<iostream>
using namespace std;
template <class T>
void swap(T x,T y)
{
    T temp;
    temp = x;
    x = y;
    y = temp;
}
void fun1(int a,int b)
{
    cout<<"\n Before Swap :";
    cout<<"\n a = "<<a<<"\n b = "<<b;
    swap(a,b);
    cout<<"\n After Swap :";
    cout<<"\n a = "<<a<<"\n b = "<<b;
}
int void fun2(float m,float n)
{
    cout<<"\n Before Swap :";
    cout<<"\n m = "<<m<<"\n n = "<<n;
    swap(m,n);
    cout<<"\n After Swap :";
    cout<<"\n m = "<<m<<"\n n = "<<n;
}
int main()
{
    fun1(10,20);
    fun2(3.4,7.8);
    return 0;
}
