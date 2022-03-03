#include <stdio.h>
#include <stdlib.h>



struct node
{

   int data;
   struct node *next;

};

struct node *new_node,*head;

void InsertItem()
{

    struct node *temp;
    int val;
    temp = head;

    new_node = (struct node*)malloc(sizeof(struct node*));
    printf("Enter The value \n");
    scanf("%d",&val);
    
    new_node->data = val;
    new_node->next = NULL;
    
    if(head == NULL)
    {
       head = new_node;
       new_node = head;
    }
    
    else 
    {
     
      
       
       new_node->next = head;
       head = new_node;
    
    }
    
    


}

void InsertRear()
{

    struct node *temp;
    int val;
    temp = head;

    new_node = (struct node*)malloc(sizeof(struct node*));
    printf("Enter The value \n");
    scanf("%d",&val);
    
    new_node->data = val;
    
    
    if(head == NULL)
    {
        head = new_node;
        
    }
    else
    {
    
     while(temp->next != NULL)
    {
         temp = temp->next;
    
    }
    temp->next = new_node;
    new_node->next = NULL;
    }
    


}


void display()
{
    struct node *temp;
    temp = head;
    if(head == NULL)
    {
       printf("List Is Empty \n");
       
    }
    while(temp != NULL)
    {
         printf("%d \n",temp->data);
         temp = temp->next;
    
    }


}

void givenposition()
{

    struct node *temp;
    int pos,i;
    printf("Enter the position in which the element is to be inserted \n");
    scanf("%d",&pos);
    if(pos == 1)
    {
        InsertItem();
    
    }
    
    else{
	    new_node = (struct node *)malloc(sizeof(struct node));
	    printf("enter the element\n");
	    scanf("%d",&new_node->data);
	    new_node->next = NULL;
	    temp = head;
	    for(i=1;i<pos-1;i++)
		temp = temp->next;
	    new_node->next = temp->next;
	    temp->next = new_node;			
	
	}
}


void main()
{

   int choice;
   
   for(;;)
   {
       printf("******** Linked List ******* \n\n");
       printf("1. Insert At The front \n ");
       printf("2. Insert at The Rear \n");
       printf("3.Insert At Specified Location \n");
       printf("4. Display the Content Of Linked List \n");
       printf("5. Exit \n");
       
       printf("Enter The Choice \n\n");
       scanf("%d",&choice);
       
       switch(choice)
       {
           case 1: InsertItem();
                   break;
           case 2: InsertRear();
                   break;
           case 3: givenposition();
                   break;
           case 4: display();
                   break;
           case 5: exit (0);
           
           
           
       
       }
   
   
   
   }


}
