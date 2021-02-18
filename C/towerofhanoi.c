#include<stdio.h>
#include<math.h>
void tower(int n,char A,char B,char C)
{
    if(n==1)
    {
        printf("%c-->%c\n",A,C);
        return;
    }
        tower(n-1,A,C,B);
        printf("%c-->%c\n",A,C);
        tower(n-1,B,A,C);
        return;
}
void main()
{
    int n,min;
    printf("\n Enter the number of discs \n");
    scanf("%d",&n);
    min=pow(2,n)-1;
    printf("\n Minimum number of steps required for completing this task=%d \n",min);
    tower(n,'A','B','C');
}
