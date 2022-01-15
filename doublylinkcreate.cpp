#include<stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
 struct Node*next;
 struct Node*pre;   
};
struct Node*head=0;
struct Node*tail=0;
void create()
{
int x,choice;
//struct Node*temp=head;
while (choice)

{
struct Node*newnode=(struct Node*)malloc(sizeof(struct Node));
 printf("enter the data :\n");
            scanf("%d",&newnode->data);
newnode->next=0;
newnode->pre=0;
if (head==0)
{
    head=tail=newnode;
}
else
{
    newnode->pre=tail;
    tail->next=newnode;
    tail=newnode;
}
printf("enter one for continue and one for zero :\n");
scanf("%d",&choice);
}
//printf("%d",temp->next->data);
}
void display()
{
    struct Node*temp=head;
    while (temp->next!=0)
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