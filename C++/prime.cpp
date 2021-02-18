#include <iostream>
using namespace std;
int main()
{
    int i;
    for(i=2;i<1000;i++)
    {
        int s=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0){
                s+=1;
            }
        }
        if(s==0){
            cout<<i<<endl;
        }
    }
    
    return 0;
}