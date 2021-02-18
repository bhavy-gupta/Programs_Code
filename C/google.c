#include<stdio.h>
void main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int n,j,b,s=0,a[10000],ans=0;
        scanf("%d%d",&n,&b);
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }
        for(j=0;j<n;j++)
        {
            if((s+a[j])<=b)
            {
                s+=a[j];
                ans++;
            }
        }
        printf("Case #%d: %d",i,ans);
    }
}
