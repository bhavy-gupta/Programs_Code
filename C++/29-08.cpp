// Double Dimension Array : 2-D Array using Array Pointer
#include<iostream>
using namespace std;
class Matrix
{
private:
    int **p;    //Double Dimension Array
    int d1,d2;
public:
    Matrix()
    {
        d1=0;
        d2=0;
    }
    Matrix(int a,int b)
    {
        d1=a;
        d2=b;
        p=new int *[d1];    //Creating Memory for Pointer Array
        for(int i=0;i<d1;i++)
        {
            p[i]=new int[d2];
        }
    }
    void get_element(int i,int j,int value)
    {
        p[i][j]=value;
    }
    int put_element(int i,int j)
    {
        return p[i][j];
    }
};
int main()
{
    int m,n;
    cout<<"Enter the size of Matrix : ";
    cin>>m>>n;
    Matrix A(m,n);
    int i,j,value;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<"Enter Value at "<<i<<j<<" : ";
            cin>>value;
            A.get_element(i,j,value);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<A.put_element(i,j)<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
