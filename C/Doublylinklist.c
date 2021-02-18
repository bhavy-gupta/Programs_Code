#include<stdio.h>
#include<stdlib.h>

typedef struct node
  {
      int info;
      struct node * next, *prev;
  }NODE;
  NODE *start=NULL;


void insert_from_begin(int value)
 {
     NODE *p;
     p=(NODE *)malloc(sizeof(NODE));
     p->info=value;
     p->next=NULL;
     p->prev=NULL;
     if(start==NULL)
          start=p;
     else
     {
         p->next=start;
         start->prev=p;
         start=p;
     }

 }

 void insert_at_end(int value)
 {
     NODE *p,*loc;
     p=(NODE *)malloc(sizeof(NODE));
     p->info=value;
     p->next=NULL;
     p->prev=NULL;

     if(start==NULL)
     {
         start=p;
     }
     else
     {
         loc=start;
         while(loc->next!=NULL)
         {
             loc=loc->next;
         }
         loc->next=p;
         p->prev=loc;
     }
 }

 void insert_in_between_position(int value,int position)
 {
     NODE *p,*temp,*loc;
     int counter=1;
     p=(NODE *)malloc(sizeof(NODE));
     p->info=value;
     p->next=NULL;
     p->prev=NULL;
     loc=start;
     if(position==1)
     {

         if(start!=NULL)
         {
            p->next=start;
            start->prev=p;
         }
         start=p;
     }
     else
     {
     while(counter<position && loc!=NULL)
     {
         temp=loc;
         loc=loc->next;
         counter++;
     }
      p->next=loc;
      if(loc!=NULL)
        loc->prev=p;
      p->prev=temp;
      temp->next=p;
 }
 }
 void insert_in_between_value(int value,int num)
 {
     NODE *p,*temp,*loc;
     p=(NODE *)malloc(sizeof(NODE));
     p->info=value;
     p->next=NULL;
     p->prev=NULL;
     loc=start;
     while(temp->info!=num && loc!=NULL)
     {
         temp=loc;
         loc=loc->next;
     }
      p->next=loc;
      if(loc!=NULL)
           loc->prev=p;
      p->prev=temp;
      temp->next=p;
 }

void delete_from_begin()
 { NODE *loc;
   if(start==NULL)
     printf("\nEmpty linked list\n");
   else
   {
        loc=start;
       start=start->next;
       start->prev=NULL;
       free(loc);
   }

 }

 void delete_from_end()
  {
    NODE *temp, *loc;

    if(start==NULL)
     printf("\nEmpty linked list\n");
   else
      {
          loc=start;
           while (loc->next!=NULL)
                  {
                      temp=loc;
                      loc=loc->next;
                  }
          temp->next=NULL;
         free(loc);
      }
  }

  void delete_in_between_position(int position)
 {
    NODE *loc,*temp;
    int counter=1;
    loc=start;
   if(start==NULL)
     printf("\nEmpty linked list\n");

   else if(position==1)
   {
       start=start->next;
       if(start!=NULL)
        start->prev=NULL;
       free(loc);
   }
   else
    {
          while(counter<position && loc!=NULL)
                {
                       temp=loc;
                       loc=loc->next;
                       counter++;
                 }
          if(loc==NULL)
          {
              printf("\nElement not found!!!\n"); exit(1);
          }
          temp->next=loc->next;
          if(loc->next!= NULL)
                 loc->next->prev=temp;
       free(loc);
     }
 }
 void delete_in_between_value(int num)
 {
    NODE *temp,*loc;
    loc=start;
    if(start==NULL)
         printf("\nEmpty linked list\n");

    else if (loc->info==num)
        {
            start=start->next;
            if(start!= NULL)
                start->prev=NULL;
            free(loc);
         }
    else
      {
          while(loc->info!=num && loc!=NULL)
              {
                       temp=loc;
                       loc=loc->next;

                 }
        if(loc==NULL)
          {
              printf("\nElement not found!!!\n"); exit(1);
          }
          temp->next=loc->next;
          if(loc->next!= NULL)
                 loc->next->prev=temp;
       free(loc);

    }
 }

void display()
{
    NODE *p;
    p=start;
    if(start==NULL)
    printf("empty linked list");
    else
       {
              while(p!=NULL)
                 {
                        printf("%d -->",p->info);
                        p=p->next;
                 }
       }
}

void main()
{
  int choice,element,position,num;
  printf("1. Insert at BEGIN \n2. Insert at END \n3  Insert In Between (position) \n4. Insert In Between (value)\n5. Delete from BEGIN\n6. Delete at END\n7. Delete in Between(POSITION)\n8. Delete in Between(VALUE)\n9. DISPLAY\n10. EXIT\n");
  while(1)
      {
            printf("Enter your choice:");
               scanf("%d",&choice);
            switch(choice)
                    {
                       case 1: printf("Enter the element that you want to insert:");
                               scanf("%d",&element);
                               insert_from_begin(element);
                               break;

                       case 2: printf("enter the element u want to insert");
                               scanf("%d",&element);
                               insert_at_end(element);
                               break;

                       case 3: printf("enter the position where you want to insert:");
                               scanf("%d",&position);
                               printf("enter the element u want to insert");
                               scanf("%d",&element);
                               insert_in_between_position(element,position);
                               break;

                       case 4: printf("Enter the no. after you want to insert new node:");
                               scanf("%d",&num);
                               printf("enter the element u want to insert");
                               scanf("%d",&element);
                               insert_in_between_value(element,num);
                               break;

                      case 5:  delete_from_begin();
                               printf("Element deleted from begin\n");
                               break;

                      case 6:  delete_from_end();
                               printf("Element deleted from end\n");
                               break;

                      case 7:  printf("enter the position which you want to delete:");
                               scanf("%d",&position);
                               delete_in_between_position(position);
                               break;

                      case 8:  printf("Enter the no. do you want to delete:");
                               scanf("%d",&num);
                               delete_in_between_value(num);
                               break;

                      case 9:  display();
                               break;

                      default: exit(1);

          }
      }
}
