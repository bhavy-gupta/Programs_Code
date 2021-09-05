#include <stdio.h>
#include <string.h>

int main()
{
    char str[50],ch;
    scanf("%[^\n]%*c", str);
    scanf("%c",&ch);
    int count=0;
    int n = strlen(str);
    if(n==2)
    {
        printf("-1");
    }
    else
    {
        if(str[0]==str[n-1])
        {
            for(int i=0;i<n;i++)
            {
                if(str[i]==ch)
                    count++;
            }
            printf("%d",count);
        }
        else
        {
            printf("0");
        }
    }  
    return 0;
}
