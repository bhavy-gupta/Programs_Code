#include<stdio.h>
#include<stdlib.h>

typedef struct node
  {
      int info;
      struct node * next;
  }NODE;
  NODE *start=NULL;


void insert_from_begin(int value)
 {
     NODE *p;
     p=(NODE *)malloc(sizeof(NODE));
     p->info=value;
     p->next=start;
     start=p;

 }


void insert_at_end(int value)
 {
     NODE *p,*loc;
     p=(NODE *)malloc(sizeof(NODE));
     p->info=value;
     p->next=NULL;
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
     }
 }


void insert_in_between_position(int value,int position)
 {
     NODE *p,*temp,*loc;
     int counter=1;
     p=(NODE *)malloc(sizeof(NODE));
     p->info=value;
     loc=start;
     p->next=NULL;
     if(position==1)
     {

         if(start!=NULL)
         {
            p->next=start;
         }
         start=p;
     }
    else

    {
         while(loc!=NULL && counter<position)
         {
             temp=loc;
             loc=loc->next;
             counter++;
         }
      p->next=loc;
      temp->next=p;
    }

 }


 void insert_in_between_value(int value, int num)
 {
     NODE *p,*temp,*loc;
     p=(NODE *)malloc(sizeof(NODE));
     p->info=value;
     loc=start;
     temp=loc;
     while(p->info!=num && loc!=NULL)
     {
         temp=loc;
         loc=loc->next;
     }
      p->next=loc;
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
     free(loc);
  }
 }


void delete_from_end()
  {
    NODE *p, *loc;

    if(start==NULL)
     printf("\nEmpty linked list\n");
     else if(start->next==NULL)
     {
          loc=start;
         start=NULL;
         free(loc);
     }
   else
      {
                  loc=start;
           while (loc->next!=NULL)
                  {
                      p=loc;
                      loc=loc->next;
                  }
          p->next=NULL;
       free(loc);
      }

  }
void delete_in_between_position(int position)
 {
    NODE *p,*loc,*temp;
    int counter=1;
   if(start==NULL)
     printf("\nEmpty linked list\n");
   else if(position==1)
   {
       p=start;
       start=start->next;
       free(p);
   }
   else
    {
          loc=start;
          p=loc;
          while(counter<position && loc->next!=NULL)
                {
                       p=loc;
                       loc=loc->next;
                       counter++;
                 }
          p->next=loc->next;
       free(loc);
     }
 }

void delete_in_between_value(int num)
 {
    NODE *p,*loc;
    loc=start;
    if(start==NULL)
         printf("\nEmpty linked list\n");

    else if(loc->info==num)
    {
        start=start->next;
        free(loc);
    }
    else
    {
          while(loc->info!=num && loc!=NULL)
                {
                       p=loc;
                       loc=loc->next;

                 }
          p->next=loc->next;
    }
     free(loc);
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
                               printf("Element deleted from between\n");
                               break;

                      case 8:  printf("Enter the no. do you want to delete:");
                               scanf("%d",&num);
                               delete_in_between_value(num);
                               printf("Element deleted from between\n");
                               break;

                      case 9:  display();
                               break;

                      default: exit(0);

          }
      }
}
