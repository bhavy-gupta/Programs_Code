//2d array dynamic
#include<iostream>
using namespace std;
class matrix
{
    int **p;
    int d1, d2;
    public:
        matrix()
        {
            d1 = 0;
            d2 = 0;
        }
        matrix(int x, int y)
        {
            d1 = x;
            d2 = y;
            p = new int *[d1];    //creation of pointer array
            for(int i=0;i<d1;i++)
            {
                p[i] = new int[d2];
            }
        }
        void get_element(int i, int j, int value)
        {
            p[i][j] = value;
        }
        int put_element(int i, int j)
        {
            return p[i][j];
        }
};
int main()
{
    int m, n;
    cout<<"\n Enter the size of Matrix = ";
    cin>>m>>n;
    matrix A(m,n);
    int i,j,value;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
        cout<<A.put_element(2,3);

        }
        cout<<"\n";
    }
    return 0;
}
