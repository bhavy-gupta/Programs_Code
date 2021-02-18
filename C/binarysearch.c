#include<stdio.h>
void main()
{
    int z,r;
    printf("\n enter the size of an array \n");
    scanf("%d",&z);
    int a[z],x,i;
    printf("\n enter the elements of an array \n");
    for(i=0;i<z;i++)
        scanf("%d",&a[i]);
    printf("\n enter the element you want to search \n");
    scanf("%d",&x);
    r=search(a,z,x);
    if(r==1)
        printf("\n element found \n");
    else
        printf("\n element not found \n");
}
    int search(int a[],int z,int x)
    {
        int low,i,high,mid,flag=0;
    low=0;
    high=z-1;
       while(low<=high)
    {
        mid=((low+high)/2);
        if(x==a[mid])
        {
            flag=1;
            break;
        }
        else if(x < a[mid])
             high=mid-1;
        else
             low=mid+1;
    }
    if(flag==1)
        return 1;
    else
        return 0;
}
