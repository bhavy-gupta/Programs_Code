#include<stdio.h>
void merge(int a[], int l[], int r[], int n, int n1, int n2)
{
	int i=0, j=0, k=0;
	while(i<n1 && j<n2)
	{	if(l[i]<=r[j])
		{	a[k]=l[i];
			i++;
		}
		else
		{	a[k]=r[j];
			j++;
		}
		k++;
	}
	while(i<n1)
	{	a[k]=l[i];
		i++; k++;
	}
	while(j<n2)
	{	a[k]=r[j];
		j++; k++;
	}

}



void mergesort(int a[], int n)
{	int i, j, mid;
	if(n<2)
		return;
	mid=n/2;
	int left[mid];
	int right[n-mid];
	for(i=0;i<mid; i++)
		left[i]=a[i];
	for(i=mid, j=0; i<n; i++, j++)
		right[j]=a[i];
    printf("\n\nPrinting left array:\n");
    for(i=0; i<mid; i++)
        printf("%d  ", left[i] );
    printf("\nPrinting right array:\n");
    for(i=0; i<n-mid; i++)
        printf("%d  ", right[i] );

	mergesort(left, mid);
	mergesort(right, n-mid);
	merge(a, left, right, n, mid, n-mid);
}


void main()
{	int n, i;
	printf("Enter the size of array:");
	scanf("%d", &n);
	int a[n];
	printf("Enter the elements of array:\n");
	for(i=0; i<n; i++)
		scanf("%d", &a[i]);
	printf("Entered elements are:\n");
	for(i=0; i<n; i++)
		printf("%d   ", a[i]);

	mergesort(a, n);
	printf("\nArray after sorting:\n");
	for(i=0; i<n; i++)
		printf("%d   ", a[i]);
	printf("\n");
}
