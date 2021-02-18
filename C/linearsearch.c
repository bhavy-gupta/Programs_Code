#include<stdio.h>
int linears(int a[],int n,int k);
void main()
{
     int i,n,k,r;
    printf("\n Enter the size of an array \n");
    scanf("%d",&k);
    int a[k];
    printf("\n Enter the elements of an array \n");
    for(i=0;i<k;i++)
        scanf("%d",&a[i]);
    printf("\n Enter the element you want to search in an array \n");
    scanf("%d",&n);
    r=linears(a,n,k);
    if(r==1)
        printf("\n Element found \n");
   else
    printf("\n Element missing\n");
    }

int linears(int a[],int n,int k)
{
    int i,flag=0;
     for(i=0;i<k;i++)
    {
        if(a[i]==n)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        return 1;
    else
        return 0;
}
