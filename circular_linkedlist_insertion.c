#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node*next;
};
struct Node*head=0;
struct Node*tail=0;
void create()
{ 
    int choice;
    while (choice)
    {
    struct Node*newnode=(struct Node*)malloc(sizeof(struct Node));
    printf("enter the data : \n");
    scanf("%d",&newnode->data);
    struct Node*next=0;
    if (head==0)
    {
      
        head=tail=newnode;
          newnode->next=head;

    }
    else
    {
        tail->next=newnode;
        newnode->next=head;
        tail=newnode;
    }
     printf("enter 1 for continue and 0 for exit :\n");
     scanf("%d",&choice);     
    }
    //printf("%d",tail->next->data);
}
void InserAtBeg()
{
    struct Node*newnode=(struct Node*)malloc(sizeof(struct Node));
    printf("enter the data for inserting at Beg : \n");
    scanf("%d",&newnode->data);
    struct Node*next=0;
    if (head==0)
    {
          head=tail=newnode;
          newnode->next=head;
    }
    else
    {
        newnode->next=head;
        head=newnode;
        tail->next=head;
    }
}
void InsertAtEnd()
{
     struct Node*newnode=(struct Node*)malloc(sizeof(struct Node));
    printf("enter the data for inserting at last : \n");
    scanf("%d",&newnode->data);
    struct Node*next=0;
    if (head==0)
    {
          head=tail=newnode;
          newnode->next=head;
    }
    else
    {
        newnode->next=head;
        tail->next=newnode;
        tail=newnode;
    }
}
int getlength()
{
    int count=1;
    struct Node*temp=head;
    while (temp->next!=head)
    {
        count++;
        temp=temp->next;
    }
  return count;//printf("%d",count);
}
void InsertAtIndex()
{
    int index,i=1;
   int l=getlength();
    struct Node*newnode=(struct Node*)malloc(sizeof(struct Node));
    printf("enter the index :\n");
    scanf("%d",&index);
    struct Node*next=0; 
    if (index==0)
    {
        printf("invalid index");
    }
else if (index==1)
{
     InserAtBeg();
}
else if (index==l)
{
    InsertAtEnd();
}
else
{
     printf("enter the data for inserting at index : \n");
    scanf("%d",&newnode->data);
       struct Node*temp=head;
       while (i<index-1)
       {
        temp=temp->next;
           i++;
       } 
          newnode->next=temp->next;
           temp->next=newnode;              
}
}
void InsertAfterIndex()
{
    int index,i=1;
    struct Node*newnode=(struct Node*)malloc(sizeof(struct Node));
    printf("enter the data for inserting after index : \n");
    scanf("%d",&newnode->data);
    printf("enter the index :\n");
    scanf("%d",&index);
    struct Node*next=0; 

       struct Node*temp=head;
       while (i<index)
       {
           temp=temp->next;
           i++;
       } 
       newnode->next=temp->next;
           temp->next=newnode;
}
void display()
{
    struct Node*temp=head;
    while (temp->next!=head)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
       printf("%d",temp->data);
}
int main()
{
    create();
display();
printf("\n");
 InserAtBeg();
 display();
printf("\n");
 InsertAtEnd();
  display();
  printf("\n");
InsertAtIndex();
  display();
  printf("\n");
  InsertAfterIndex();
    display();
return 0;
}