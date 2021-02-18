#include<stdio.h>
#include<stdlib.h>
#define MAX 50

typedef struct stack
       {
           int arr[MAX];
           int top;
       }STACK;

 STACK s;

void push(int value)
 {
   if(s.top== MAX-1)
      {
          printf("\n OVERFLOW!!!!!!1\n");
       }
   else
     {
          s.top++;
          s.arr[s.top]=value;
     }
  }

void pop()
 {
    int value;
    if(s.top==-1)
      {
          printf("\n UNDERFLOW!!!!!!1\n");
       }
   else
     {
          value=s.arr[s.top];
          printf("\n element deleted from stack: %d\n", value);
          s.top--;
     }
  }

void display()
 {
   int i;
   for(i=s.top; i>=0 ; i--)
       printf("%d\t", s.arr[i]);
 }


void main()
  {
       s.top=-1;
    int choice,element;
     while(1)
       {
               printf("\n1.PUSH\n2.POP\n3.DISPLAY\n");
               printf("\nEnter your Choice\n");
               scanf("%d",&choice);
               switch(choice)
                        {
                             case 1:  printf("Enter the value do you want to insert in the stack : ");
                                       scanf("%d",&element);
                                      push(element);
                                      break;

                             case 2:  pop();
                                      break;

                             case 3:  display();
                                      break;
                             default: exit(0);
                          }
           }
 }
