#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 50

typedef struct stack
       {
           int arr[MAX];
           int top;
       }STACK;

 STACK s;

void push(int value)
 {
   int element;
   if(s.top== MAX-1)
      {
          printf("\n OVERFLOW!!!!!!\n");
       }
   else
     {
          s.top++;
          s.arr[s.top]=value-48;
     }
  }

void evaluate(char e)
{
   int a,b,ans;

   a=s.arr[s.top];
   s.arr[s.top]='\0';
   s.top--;

   b=s.arr[s.top];
   s.arr[s.top]='\0';
   s.top--;

   switch(e)
              {
                   case '+':ans=b+a;
                            break ;
                   case '-':ans=b-a;
                            break;
                   case '*':ans=b*a;
                            break;
                   case '/':ans=b/a;
                            break;
                   case '^':ans=b^a;
                            break;
                   default: ans=0;
              }
   s.top++;
   s.arr[s.top]=ans;
}

void main()
  {  s.top=-1;
     int i;
     char element[50];
     printf("\n Enter Postfix expression :\n");
     gets(element);
     for(i=0;i<strlen(element);i++)
            {
                  if(element[i]>='0'&& element[i]<='9')
                          {
                                push(element[i]);
                          }
                  if((element[i]=='+')||(element[i]=='-')||(element[i]=='*')||(element[i]=='/')||(element[i]=='^'))
                          {
                                evaluate(element[i]);
                          }
            }
     printf("\n\n Result :: %d\n", s.arr[s.top]);
  }


