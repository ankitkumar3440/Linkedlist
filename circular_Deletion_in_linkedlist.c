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
void DelteAtBeg()
{
    if (head==0)
    {
        printf("empty\n");
    }
    else if (head==tail)
    {
         struct Node*temp=head;
        head=tail=0;
        temp->next=0;
        free(temp);
    }
    else
    {
        struct Node*temp=head;
       head=temp->next;
tail->next=head;
free(temp);
    }
}
void DelteAtEnd()
{
    if (head==0)
    {
        printf("empty\n");
    }
    else if (head==tail)
    {
         struct Node*temp=head;
        head=tail=0;
        temp->next=0;
        free(temp);
    }
    else 
    {
        struct Node*p=tail;
        struct Node*temp=head;
        while (temp->next!=tail)
        {
            temp=temp->next;
        }
        temp->next=head;
        tail=temp;
        free(p);
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
void DeleteAtIndex()
{
     int i=1;
    int index;
int l=getlength();
         struct Node*p=head;
        struct Node*q=head->next;
printf("enter the index :\n");
scanf("%d",&index);
    if(index==0)
    {
        printf("empty");
    }
    else if (index==1)
    {
        DelteAtBeg();
    }
    else if (index==l)
    {
        DelteAtEnd(); 
    }
    else
    {
while (i<index-1)
{
    p=p->next;
    q=q->next;
}
p->next=q->next;
free(q);
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
//printf("\n");
 //getlength();
 printf("\n");
DelteAtBeg();
display();
printf("\n");
 DelteAtEnd();
display();
 printf("\n");
 DeleteAtIndex();
 display();
return 0;
}