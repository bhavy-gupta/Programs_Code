#include<stdio.h>
#include<stdlib.h>

typedef struct queue
    {
         int info;
         struct queue*next;
    }QUEUE;

QUEUE *front=NULL;
QUEUE *rear=NULL;

void enqueue(int value)
 {
    QUEUE *p;
    p=(QUEUE*)malloc(sizeof(QUEUE));
    p->info=value;
    p->next=NULL;
    if(front==NULL)
        {
         front=p;
         rear=p;
       }
    else
       {
          rear->next=p;
          rear=p;
        }
 }

 void dequeue()
  {
      QUEUE *p;
      if(front==NULL)
             printf("\nUNDERFLOW !!!!!!!!!!!\n");
      else
         {
           p=front;
           if(front==rear)
                    rear=NULL;
           front=front->next;
           free(p);
         }
   }

void display()
  {
       QUEUE *p;
       p=front;
       if(front==NULL)
             printf("\nUNDERFLOW !!!!!!!!!!!\n");
       else
            {
              while(p!=NULL)
                {
                     printf("\n %d", p->info);
                     p=p->next;
                }
            }
  }


void frontelement()
  {
      if(front==NULL)
             printf("\nUNDERFLOW !!!!!!!!!!!\n");
      else
             printf("\nFront Element is :%d\n",front->info);
  }

void rearelement()
  {
      if(front==NULL)
             printf("\nUNDERFLOW !!!!!!!!!!!\n");
      else
             printf("\nRear Element is :%d\n",rear->info);
  }

void count()
    {
       QUEUE *p;
       int count=0;
       p=front;
       if(front==NULL)
            {
             printf("\nNo. of element: %d\n",count);
             printf("\nUNDERFLOW !!!!!!!!!!!\n");
            }
       else
            {
              while(p!=NULL)
                {
                     count++;
                     p=p->next;
                }
              printf("\nNo. of element: %d\n",count);
            }
   }

void destroy()
    {
        QUEUE *p;
        p=front;
        while(front!=NULL)
          {
              p=front;
              front=front->next;
              free(p);
          }
           printf("\nEmpty linked list\n");
    }

void main()
  {
    int choice,element;
     while(1)
       {
               printf("\n1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.FRONT ELEMENT\n5.REAR ELEMENT\n6.COUNT\n7.DESTROY\n");
               printf("\nEnter your Choice\n");
               scanf("%d",&choice);
               switch(choice)
                        {
                             case 1:  printf("Enter the value do you want to insert in the queue : ");
                                      scanf("%d",&element);
                                      enqueue(element);
                                      break;

                             case 2:  dequeue();
                                      break;

                             case 3:  display();
                                      break;

                             case 4:  frontelement();
                                      break;

                             case 5:  rearelement();
                                      break;

                             case 6:  count();
                                      break;

                             case 7:  destroy();
                                      break;

                             default: exit(0);
                          }
           }
}
