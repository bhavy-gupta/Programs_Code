#include<stdio.h>
void main()
{
    int a[10],ele,i,pos,in,n;
    printf("Enter The Number Of Elements You Want to Enter : ");
    scanf("%d",&n);
    printf("Enter Elements :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter Element you Want to Search : ");
    scanf("%d",&ele);
    for(i=0;i<n;i++)
    {
        if(ele==a[i])
        {
            in=i;
            pos=i+1;
            printf("Element Found at INDEX (%d) and POSITION (%d)\n",in,pos);
            exit(0);
        }
    }
    printf("ELEMENT NOT FOUND !!!\n");
}
