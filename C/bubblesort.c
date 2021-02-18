#include<stdio.h>

void bubblesort(int a[], int n)
{
    int i,j,temp, flag, k;
    for(i=0; i<n-1; i++)
    {
        flag=0;
        for(j=0; j<(n-1)-i; j++)
        {
            if(a[j+1]<a[j])
            {
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
                flag=1;
            }
        }

        if(!flag)
            break;
    }
}

void main()
{   int n, i;
    printf("Enter the size of array:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of Array:\n");
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);
    bubblesort(arr, n);
    printf("Array after sorting:\n");
    for(i=0; i<n; i++)
        printf("%d  ", arr[i]);
}
