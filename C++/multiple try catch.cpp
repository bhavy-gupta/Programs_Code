#include<iostream>
using namespace std;
void test(int x)
{
    try
    {
            if(x == 1)
            throw x;
        else if(x == 2)
            throw 'A';
        else if(x == 3)
            throw 4.5;
    }
    catch(int m)
    {
        cout<<"\nInteger Exception Occur";
    }
        catch(char m)
    {
        cout<<"\nCharacter Exception Occur";
    }
    catch(double m)
    {
        cout<<"\nDouble Exception Occur";
    }
    catch(...)
    {
        cout<<"\nGeneral Exception Occur";
    }

}
int main()
{
    test(1);
    test(2);
    test(3);
    return 0;
}
