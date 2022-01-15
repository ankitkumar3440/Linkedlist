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
return 0;
}