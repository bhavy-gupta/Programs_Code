#include<stdio.h>

void selectionsort(int a[], int n)
{
	int i, j,min, temp;
	for(i=0; i<n-1; i++)
	{	min=i;
		for(j=i+1; j<n; j++)
		{	if(a[j]<a[min])
				min=j;
		}
		temp=a[min];
		a[min]=a[i];
		a[i]=temp;
	}
}

void main()
{
	int i, n;
	printf("Enter the size of array:\n");
	scanf("%d", &n);
	int arr[n];
	printf("Enter the elements of array:\n");
	for(i=0; i<n; i++)
		scanf("%d", &arr[i]);
	selectionsort(arr, n);
	printf("\nArray after sorting:\n");
	for(i=0; i<n; i++)
		printf("%d  ", arr[i]);
}
