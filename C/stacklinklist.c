#include<stdio.h>

#include<stdlib.h>


typedef struct stack
    
{
         
int info;
         
struct stack*next;
    
}STACK;


STACK *top=NULL;


void push(int value)
 
{
    
STACK *p;
    
p=(STACK*)malloc(sizeof(STACK));
    
p->info=value;
    
p->next=NULL;
    
if(top==NULL)
         
top=p;
    
else
       
{
         
p->next=top;
          
top=p;
        
}

}

 
void pop()
  
{
      
STACK *p;
      
if(top==NULL)
             
printf("\nUNDERFLOW !!!!!!!!!!!\n");
      
else
         
{
           
p=top;
           
top=top->next;
           
free(p);
         
}
   
}


void display()
  
{
       
STACK *p;
       
p=top;
       
if(top==NULL)
             
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



void topelement()
  
{
      
if(top==NULL)
             
printf("\nUNDERFLOW !!!!!!!!!!!\n");
      
else
             
printf("\nTop Element is :%d\n",top->info);
  
}


void count()
    
{
       
STACK *p;
       
int count=0;
       
p=top;
       
if(top==NULL)
            
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
        
STACK *p;
        
p=top;
        
while(top!=NULL)
          
{
              
p=top;
              
top=top->next;
              
free(p);
          
}
           
printf("\nEmpty linked list\n");
    
}


void main()
  
{
   
int choice,element;
     
while(1)
       
{
               
printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.TOP ELEMENT\n5.COUNT\n6.DESTROY\n");
               
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

                             
case 4:  topelement();
                                      
break;

                             
case 5:  count();
                                      
break;

                             
case 6:  destroy();
                                      
break;

                             
default: exit(0);
                          
}
           
}

}
