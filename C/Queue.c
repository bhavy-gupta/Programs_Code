#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 50
int front=-1;
int rear=-1;
int queue[MAXSIZE];
void insert()
{
    if(rear==MAXSIZE-1)
    {
        printf("Queue is Full\n");
        //exit(0);   We only write this in ALGO not in Program as we have to perform more functions after this .
    }
    else if(rear==-1)
    {
        rear=0;
        front=0;
        printf("Enter DATA to Insert : ");
        scanf("%d",&queue[rear]);
    }
    else
    {
        rear+=1;
        printf("Enter DATA to Insert : ");
        scanf("%d",&queue[rear]);
    }
}
void del()
{
    if(front==-1)
    {
        printf("Queue is Empty\n");
    }
    else if(front==rear)
    {
        printf("Element Deleted .\n");
        front=-1;
        rear=-1;
    }
    else
    {
        printf("Element Deleted \n");
        front=front+1;
    }
}
void display()
{
    if(front==-1)
    {
        printf("Queue is Empty .\n");
    }
    else
    {
        int i;
        printf("Queue : ");
        for(i=front;i<=rear;i++)
        {
            printf("%d\t",queue[i]);
        }
    }
}
void main()
{
    int entry;
    do
    {
        int choice;
        printf("Press 1 to Insert DATA \n");
        printf("Press 2 to Delete DATA \n");
        printf("Press 3 to Display DATA \n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 : insert();
            break;
            case 2: del();
            break;
            case 3: display();
            break;
            default : printf("Invalid Choice!!!!\n");
        }
        printf("\nDo you want to perform any more Operation press 1 : ");
        scanf("%d",&entry);
    }while(entry==1);
}
