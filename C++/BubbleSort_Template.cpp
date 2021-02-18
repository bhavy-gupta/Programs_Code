#include<iostream>
#include<vector>
using namespace std;
template<typename T>
void BubbleSort(T arr[], int n)
{
    for(int i=0;i<n-1;++i)
    {
        for(int j=0;j<n-i-1;++j)
        {
            if(arr[j]>arr[j+1])
            {
                T temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
template<typename T>
void PrintArray(T arr[], int n)
{
    for (int i = 0; i < n; ++i)
    cout << arr[i] << " ";
    cout << "\n\n";
}
int main()
{
    int arr[] = { 114,210,190, 10, 1, 101, 29, 154, 23, 32, 20, 19 };
    int n = sizeof(arr) / sizeof(int);
    cout << "Array Before Sorting: " << endl;
    PrintArray(arr, n);
    BubbleSort(arr, n);
    cout << "Array After Sorting: " << endl;
    PrintArray(arr, n);
}
