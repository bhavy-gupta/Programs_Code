#include<iostream>
using namespace std;
template <class T>
class vector
{
    T *v;
public:
    vector(T *x)
    {
        for(int i=0;i<3;i++)
            v[i] = x[i];
    }
    operator *(vector *y)
    {
        T sum;
        for(int i=0;i<3;i++)
            sum = sum + v[i]*y.v[i];
        return sum;
    }
    void show()
    {
        for(int i=0;i<3;i++)
            cout<<"\n"<<v[i];
    }
};
int main()
{
    int x[] = {2,3,4};
    float y[] = {4.4,5.5,6.6};
    vector<int> v1(x);
    v1.show();
    vector<float> v2(y);
    v2.show();
    float m;
    m = v1*v2;
    cout<<"\nMultiplication of twoObjects = "<<m;
    return 0;
}
