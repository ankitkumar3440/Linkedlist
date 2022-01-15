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
void DelteAtbeg()
{
    struct Node*ptr=head;
    if (head==0)
    {
        printf("empty");
    }
    else
    {
    head=head->next;
    head->pre=0;
    free(ptr);
     }
}
void DelteAtEnd()
{  if (head==0)
    {
        printf("empty");
    }
    else
    {
struct Node*ptr=tail;
tail->pre->next=0;
tail=tail->pre;
free(ptr);  
    }
}
int getlength(){
     int count =1;
    struct Node*temp=head;
    while (temp->next!=0)
    {
       temp= temp->next;
       count++;
    }
//return count;
printf("%d",count);
}
void DelteAtIndex()
{
    int index,i=1;
    printf("enter the index :\n");
    scanf("%d",&index);
    struct Node*temp=head;
    int l= getlength();
    if(index==1)
	{
		DelteAtbeg();
	}
    else if (l==2)
    {
          while (i<index)
    {
   	temp=temp->next;
		i++;
		}	
        temp->pre->next=temp->next;
        tail=temp->pre;
        free(temp);
    }
    else if (index==l)
    {
         DelteAtEnd();
    }
    else
    {
    while (i<index)
    {
   	temp=temp->next;
		i++;
		}	
	temp->pre->next=temp->next;
    temp->next->pre=temp->pre;
    free(temp);
}   
    }
int main()
{
  create();
display();
printf("\n");
getlength();
printf("\n");
DelteAtbeg();
display();
printf("\n");
DelteAtEnd();
display();
printf("\n");
DelteAtIndex();
display();
return 0;
}