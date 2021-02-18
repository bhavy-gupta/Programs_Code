#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 10
int front=-1;
int rear=-1;
int queue[MAXSIZE];
void insert()
{
    if(front==(rear+1)%MAXSIZE)
    {
        printf("Circular Queue is Full\n");
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
        rear=(rear+1)%MAXSIZE;
        printf("Enter DATA to Insert : ");
        scanf("%d",&queue[rear]);
    }
}
void del()
{
    if(front==-1)
    {
        printf("Circular Queue is Empty\n");
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
        front=(front+1)%MAXSIZE;
    }
}
void display()
{
    if(front==-1)
    {
        printf("Circular Queue is Empty .\n");
    }
    else
    {
        int i;
        printf("Queue : ");
        if(rear>=front)
        {
            for(i=front;i<=rear;i++)
            {
                printf("%d\t",queue[i]);
            }
        }
        else
        {
            for(i=front;i<=MAXSIZE-1;i++)
                printf("%d\t",queue[i]);
            for(i=0;i<=rear;i++)
                printf("%d\t",queue[i]);
        }
    }
    //else { if(rear>=front) { for(i=front;i<=rear;i++) printf("%d",cq[i]) } else { for(i=front;i<=Maxsize-1;i++) printf("%d"cq[i]) for(i=0;i<=rear;i++) printf("%d",cq[i])
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
