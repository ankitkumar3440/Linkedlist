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
void DeleteAtBeg()
{
    if (head==0)
    {
        printf("empty");
    }
     else if (head->next==head)
    {
        struct Node*temp=head;
        head=tail=0;
        free(temp);
    }
    else
    {
struct Node*temp=head;
temp->next->pre=tail;
tail->next=temp->next;
head=temp->next;
free(temp);
}
}
void DeleteAtEnd()
{
    if (head==0)
    {
        printf("empty");
    }
    else if (head->next==head)
    {
        struct Node*temp=head;
        head=tail=0;
        free(temp);
    }
    else
    {
struct Node*temp=tail;
tail->pre->next=head;
head->pre=tail->pre;
tail=tail->pre;
free(temp);
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
void DeleteAtIndex()
{
    int index,i=1;
    printf("enter the index :\n");
    scanf("%d",&index);
      int l= getlength();
    if (index<1||index>l)
    {
        printf("invalid index");
    }
   else if (index==1)
    {
        DeleteAtBeg();
    }
    else if (index==l)
    {
       DeleteAtEnd(); 
  }
    else
    {
        struct Node*temp=head;
        while(i<index)
        {
temp=temp->next;
i++;
        }
       temp->pre->next=temp->next;
       temp->next->pre=temp->pre;
        free(temp);
    }
}
void DeleteAfterIndex()
{
    int index,i=1;
    printf("enter the index :\n");
    scanf("%d",&index);
      int l= getlength();
    if (index<1||index>l)
    {
        printf("invalid index");
    }
   else if (index==1)
    {
        DeleteAtBeg();
    }
    else if (index==l)
    {
       DeleteAtEnd(); 
  }
    else
    {
        struct Node*temp=head;
        while(i<index+1)
        {
temp=temp->next;
i++;
        }
       temp->pre->next=temp->next;
       temp->next->pre=temp->pre;
        free(temp);
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

DeleteAfterIndex();
display();
return 0;
}