#include<stdio.h>

#include<stdlib.h>


typedef struct node

{
      
int expo;
      
int coeff;
      
struct node *next;
  
}NODE;

  
NODE *p1=NULL,*q1=NULL,*start3=NULL;


void add_two_polynomial()

{
  
NODE *p,*q,*r;
  
int ch1,ch2;

  
p=(NODE *)malloc(sizeof(NODE));
  
q=(NODE *)malloc(sizeof(NODE));
  
r=(NODE *)malloc(sizeof(NODE));
r->next=NULL;
  
p1=p;
  
q1=q;
  
start3=r;

    
do 
{
          
printf("\nEnter the exponent of power of first polyniomial  : ");
          
scanf("%d",&(p->expo));
          
printf("\nEnter the coefficient of first polyniomial  : ");
          
scanf("%d",&(p->coeff));
          
p->next=NULL;
          
printf("\nAre there any other term (Yes=1 and No= 0) :");
          
scanf("%d",&ch1);
          
if(ch1==1)
            
{
              
p->next=(NODE *)malloc(sizeof(NODE));
              
p=p->next;
            
}
      
}
while(ch1==1);



    
do
{

printf("\nEnter the exponent of power of second polyniomial  : ");
          
scanf("%d",&(q->expo));
          
printf("\nEnter the coefficient of second polyniomial  : ");
          
scanf("%d",&(q->coeff));
          
q->next=NULL;
          
printf("\nAre there any other term (Yes=1 and No= 0) :");
          
scanf("%d",&ch2);
          
if(ch2==1)
               
{

q->next=(NODE *)malloc(sizeof(NODE));
                 
q=q->next;
               
}
     
} 
while (ch2==1);

 
while(p1!=NULL && q1!=NULL)
  
{

if(p1->expo > q1->expo)
       
{
            
r->expo=p1->expo;
            
r->coeff=p1->coeff;
            
p1=p1->next;
       
}
    
else if(q1->expo > p1->expo)
       
{
            
r->expo=q1->expo;
            
r->coeff=q1->coeff;
            
q1=q1->next;
        
}
   
else
       
{
            
r->expo=p1->expo;
            
r->coeff=p1->coeff + q1->coeff;
            
p1=p1->next;
            
q1=q1->next;
       
}
if(p1!=NULL && q1!=NULL)
    
{   
r->next=(NODE *)malloc(sizeof(NODE));
        
r=r->next;
        
r->next=NULL;
}
   
}

   
while(p1!=NULL)
   
{
r->next=(NODE *)malloc(sizeof(NODE));
r=r->next;
r->next=NULL;
     
r->expo=p1->expo;
     
r->coeff=p1->coeff;
     
p1=p1->next;

   
}
   
while(q1!=NULL)
   
{
     
r->next=(NODE *)malloc(sizeof(NODE));
r=r->next;
     
r->next=NULL;
r->expo=q1->expo;
     
r->coeff=q1->coeff;
     
q1=q1->next;
    
}

}

void display()

{
    
NODE *loc;
    
loc=start3;
    
if(start3==NULL)
    
printf("empty linked list");
    
else
       
{
              
while(loc!=NULL)
                 
{
                        
printf("coeff=%d expo=%d -->",loc->coeff,loc->expo);
                        
loc=loc->next;
                 
}
       
}

}



void main()

{
  
int choice;
  
printf("1. Add Two Polynomial \n2. DISPLAY\n");
  
while(1)
      
{
            
printf("Enter your choice:");
               
scanf("%d",&choice);
            
switch(choice)
                    
{
                       
case 1: add_two_polynomial();
                               
break;

                      
case 2:  printf("\n After addition of two polynomial:\n");
                               
display();
                               
break;

                      
default: 
exit(0);

                    
}
       
}

}
