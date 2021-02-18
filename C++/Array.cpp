#include <iostream>
using namespace std;
int main()
{
    int i, sum[10], pro[10], s = 0, p = 1, avs, avp, temp = 0;
    for (i = 0; i < 10; i++)
    {
        cin >> sum[i];
        s += sum[i];
    }
    avs = s / 10;
    s += 50;
    cout << "Average of Sum Array = " << avs << endl;
    cout << "Sum after adding 50 = " << s << endl;

    for (i = 0; i < 10; i++)
    {
        cin >> pro[i];
        p *= pro[i];
        temp += pro[i];
    }
    avp = temp / 10;
    p += -1000;
    cout << "Average of Product Array = " << avp << endl;
    cout << "Product after adding -1000 = " << p << endl;

    int sp = s + p;
    int avc = (avs + avp) / 2;

    cout << "Addition of above calculated Sum and Product = " << sp << endl;
    cout << "Combined Average = " << avc << endl;

    return 0;
}