#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
   struct Node*next;
   struct Node*pre; 
};
struct Node*tail=0;
struct Node*head=0;
void create()
{
    int choice;
    while (choice)
    {
       int x;
        struct Node*newnode=(struct Node*)malloc(sizeof(struct Node));
        printf("enter the data :\n");
        scanf("%d",&newnode->data);
        newnode->next=0;
        newnode->pre=0;
        if (head==0)
        {
            head=tail=newnode;
            newnode->next=newnode;
            newnode->pre=newnode;
        }
        else
        {
            newnode->next=head;
            newnode->pre=tail;
            tail->next=newnode;
            head->pre=newnode;
            tail=newnode;
        }
        printf("enter 1for continue& 0for exist :\n");
	scanf("%d",&choice);
    }
}
void InsertAtBeg()
{
      struct Node*newnode=(struct Node*)malloc(sizeof(struct Node));
        printf("enter the data inserting the begining:\n");
        scanf("%d",&newnode->data);
        newnode->next=0;
        newnode->pre=0;
    if (head==0)
    {
        head=tail=newnode;
        newnode->next=head;
        newnode->pre=head;
    }
    else
    {
        newnode->next=head;
        newnode->pre=tail;
        head->pre=newnode;
        tail->next=newnode;
        head=newnode;
    }
}
void InsertAtEnd()
{
     struct Node*newnode=(struct Node*)malloc(sizeof(struct Node));
        printf("enter the data inserting the End:\n");
        scanf("%d",&newnode->data);
        newnode->next=0;
        newnode->pre=0;
       if (head==0)
    {
        head=tail=newnode;
        newnode->next=head;
        newnode->pre=head;
    }
    else
    {
        newnode->next=head;
        newnode->pre=tail;
        tail->next=newnode;
        head->pre=newnode;
        tail=newnode;
    } 
}
int  getlength()
{
    int count =1;
    struct Node*p=head;
while (p->next!=head)
{
    count++;
    p=p->next;
}
return count;
}
void InsertAtIndex()
{
        struct Node*newnode=(struct Node*)malloc(sizeof(struct Node));
        newnode->next=0;
        newnode->pre=0;
    int index,i=1;
    int l=getlength();
    printf("enter the index :\n");
scanf("%d",&index);
    	if(index<1)
	{
		printf("invalid condition");
	}
  else if (index==1)
    {
        InsertAtBeg();
    }
    else if (index==l)
    {
        InsertAtEnd();
    }
    else
    {
         struct Node*newnode=(struct Node*)malloc(sizeof(struct Node));
        printf("enter the data inserting At the Index:\n");
        scanf("%d",&newnode->data);
struct Node*p=head;
while (i<index-1)
{
    p=p->next;
    i++;
}
newnode->next=p->next;
newnode->pre=p->next->pre;
p->next->pre=newnode;
p->next=newnode;
} 
    }
    void InsertAfterIndex()
{
        struct Node*newnode=(struct Node*)malloc(sizeof(struct Node));
        newnode->next=0;
        newnode->pre=0;
    int index,i=1;
    int l=getlength();
    printf("enter the index :\n");
scanf("%d",&index);
    	if(index<1)
	{
		printf("invalid condition");
	}
  else if (index==1)
    {
        InsertAtBeg();
    }
    else if (index==l)
    {
        InsertAtEnd();
    }
    else
    {
         struct Node*newnode=(struct Node*)malloc(sizeof(struct Node));
        printf("enter the data inserting At the Index:\n");
        scanf("%d",&newnode->data);
struct Node*p=head;
while (i<index)
{
    p=p->next;
    i++;
}
newnode->next=p->next;
newnode->pre=p->next->pre;
p->next->pre=newnode;
p->next=newnode;
} 
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
InsertAtBeg();
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