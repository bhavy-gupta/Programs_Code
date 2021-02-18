#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,j,a=0,c=0;
    char f[100],l[100],ph[10],p[10];
    scanf("%s",&f);
    scanf("%s",&l);
    scanf("%s",&ph);
    for(i=0;i<8;i++)
    {
        if(l[a]==NULL)
            break;
        p[c]=f[a];
        c++;
        p[c]=l[a];
        a++;
        c++;
    }
    for(j=0;j<10-i;j++)
    {
        p[c]=ph[j];
        c++;
    }
    for(i=0;i<10;i++)
        printf("%c",p[i]);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

