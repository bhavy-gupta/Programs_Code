#include <stdio.h>
void main()
{
    int a[100], n, i, j, temp;
    printf("Enter Elements\n");
    scanf("%d", &n);
    printf("Enter %d integers\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i=1; i<= n -1;i++)
    {
        temp = a[i];
        j=i-1;
        while((temp < a[j] )&&(j>=0))
        {
            a[j+1] = a[j];
            j= j-1;
        }
        a[j+1] = temp;
    }
    printf("Sorted list in ascending order:\n");
    for ( i = 0 ; i < n ; i++ )
    printf("%d\n", a[i]);
}
