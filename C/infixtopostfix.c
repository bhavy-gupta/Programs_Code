#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 50

struct stack{
		char ele[MAX];
		int top;
		};
typedef struct stack STACK;
STACK s;
int j=0;

void push(char ch)
{
	if(s.top==MAX-1)
		printf("Overflow!!!");
	else
		s.ele[++s.top]=ch;
}

char pop()
{
	if(s.top==-1)
		printf("Underflow!!!");
	else
		return	s.ele[s.top--];
}

void main()
{	s.top=-1;
	int i;
	char arr1[50], arr2[50], ch;
	printf("Enter the infix expression:\n");
	gets(arr1);
	for(i=0; i<strlen(arr1); i++)
	{	if(arr1[i]=='(')
			push(arr1[i]);
		if((arr1[i]>='A' && arr1[i]<='Z') || (arr1[i]>='a' && arr1[i]<='z'))
			arr2[j++]=arr1[i];
		if(arr1[i]=='+' || arr1[i]=='-')
		{
            while(1)
            {   ch=pop();
                if(ch=='+' || ch=='-' || ch=='/' || ch=='*' || ch=='^')
                        arr2[j++]=ch;
                else break;
            }
            push(ch);
            push(arr1[i]);
		}
		if(arr1[i]=='*' || arr1[i]=='/')
        {
            while(1)
            {   ch=pop();
                if(ch=='/' || ch=='*' || ch=='^')
                        arr2[j++]=ch;
                else break;
            }
            push(ch);
            push(arr1[i]);
		}
		if(arr1[i]=='^')
            push(arr1[i]);
        if(arr1[i]==')')
        {
            do{
                ch=pop();
                if(ch!='(')
                    arr2[j++]=ch;
            }while(ch!='(');

        }
	}
	arr2[j]='\0';
	printf("\nPostfix expression is:\n");
	puts(arr2);
}
