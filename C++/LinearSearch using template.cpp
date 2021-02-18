//WAP to search an array in an element using template.
#include<iostream>
using namespace std;
template <class T>
void bsearch(T a[],T n)
{
    T x;
    cout<<"\nEnter the element to be searched = ";
    cin>>x;
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
            cout<<"\nItem Found at "<<i+1<<"Location";
        break;
    }
    if(i==n)
        cout<<"\nItem NOT Found";
}
int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    bsearch(a,8);
    char b[] = {'r','a','j','u'};
    bsearch(j,7);
    return 0;
}
