#include<stdio.h>
#include<stdlib.h>
struct node
    {
    int data;
    struct node *next;
    };
struct node *start=NULL,*ptr,*temp;
void main()
    {
    int choice;
    do
        {
        ptr=(struct node *)malloc(sizeof(struct node));
        if(ptr==NULL)
            {
            printf("Memory Not Allocated\n");
            exit(0);
            }
        else
            {
            if(start==NULL)
                {
                start=ptr;
                temp=ptr;
                }
            else
                {
                temp->next=ptr;
                temp=ptr;
                }
            printf("Enter DATA : ");
            scanf("%d",&(ptr->data));
            }
        printf("Do you want to insert new Node if YES press 1 otherwise press 0 : ");
        scanf("%d",&choice);
        }while(choice==1);
    ptr->next=NULL;
    printf("Linked List : ");
    ptr=start;
    while(ptr!=NULL)
        {
        printf("%d\t",ptr->data);
        ptr=ptr->next;
        }
    int pos;
    printf("\nEnter Position of New Node : ");
    scanf("%d",&pos);
    temp=start;
    int i=0;
    while(temp!=NULL)
    {
        temp=temp->next;
        i++;
    }
    if(pos>(i+1))
    {
        printf("Position Not Available!!!");
        exit(0);
    }
    ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        printf("Memory Not Available!!!");
        exit(0);
    }
    else
    {
        printf("Enter Data : ");
        scanf("%d",&(ptr->data));
        temp=start;
        if(pos==1)
        {
           ptr->next=start;
           start=ptr;
        }
        else
        {
            for(i=1;i<pos-1;i++)
            temp=temp->next;
            ptr->next=temp->next;
            temp->next=ptr;
        }
    }
    temp=start;
    while(temp!=NULL)
        {
        printf("%d\t",temp->data);
        temp=temp->next;
        }
    }
