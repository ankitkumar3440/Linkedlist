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