#include<stdio.h>
#define MAXSIZE 50
int FRONT=-1;
int REAR=-1;
int QUEUE[MAXSIZE];
void insert(int data)
{
if(REAR==MAXSIZE-1)
printf("\nOverflow");
else if(REAR==-1)
{
FRONT=0;
REAR=0;
QUEUE[REAR]=data;
}
else
{
REAR=REAR+1;
QUEUE[REAR]=data;
}
}
void delete()
{
if(FRONT==-1)
printf("\nUnderflow");
else if(FRONT==REAR)
{
printf("deleted element is %d", QUEUE[FRONT]);
FRONT=-1;
REAR=-1;
}
else
{
printf("deleted element is %d", QUEUE[FRONT]);
FRONT=FRONT+1;
}
}
void display()
{
int i;
printf("\nDisplaying items of queue : ");
if(FRONT==-1)
printf("\nNo item in queue to display ");
else
{
for(i=FRONT;i<=REAR;i++)
printf("%d\n",QUEUE[i]);
}
}
void main()
{
enqueue(10);
enqueue(20);
enqueue(30);
enqueue(40);
enqueue(50);
display();
dequeue();
display();
}
