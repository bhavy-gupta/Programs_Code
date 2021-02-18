#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int top=-1;
int a[MAX];
void push(int val)
{
	if(top==MAX-1)
	{
	    printf("Overflow!!!");
      }
   else
   {
       top++;
	a[top]=val;
    }
}

int pop()
{
    int x,y;
	if(top==-1)
	{
		printf("Underflow!!!");
	}
	else
    {
	x=top;
	top--;
	return a[x];  }
}
void peek()
{
	printf("Result is: %d",a[top]);
}


void main()
{
int x,y,i=0;
char post[30],z;
printf("Enter the postfix notation: ");
scanf("%s",post);
while(post[i]!='\0')
{
switch(post[i])
{
case '+':	x=pop();
          y=pop();
		z=x+y;
		push(z);
		break;
case '-':	y=pop();
           x=pop();
		  z=x-y;
		push(z);
		break;
case '*':	x=pop();
            y=pop();
		push(x*y);
		break;
case '/':	x=pop();
              y=pop();
		push(y/x);
		break;
case '^':	x=pop();
              y=pop();
		push(x^y);
		break;
default	:	push(post[i]-48);
            break;
}
i=i+1;
}
peek();
}
