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
void insertatBeg()
{
    	struct Node*temp,*newnode;
	newnode=(struct Node*)malloc(sizeof(struct Node));
	printf("enter data for inserting at begining :\n");
	scanf("%d",&newnode->data);
	newnode->next=0;
    newnode->pre=0;
    if(head==0){
        head=tail=newnode;
    }
    else
    {
        newnode->pre=0;
        newnode->next=head;
        head->pre=newnode;
        head=newnode;
    }
}
void insertAtEnd(){
    	struct Node*temp,*newnode;
	newnode=(struct Node*)malloc(sizeof(struct Node));
	printf("enter data for inserting at End:\n");
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
}
void insertAtIndex()
{
   int index;
    	struct Node*newnode;
	newnode=(struct Node*)malloc(sizeof(struct Node));
	printf("enter data for inserting at Index:\n");
	scanf("%d",&newnode->data);
    printf("enter the index :\n");
    scanf("%d",&index);
    int i=1;
    	if(index<1)
	{
		printf("invalid condition");
	}
  else if (index==1)
    {
        insertatBeg();
    }
    else
    {
    struct Node*ptr=head;
        while(i<index-1){
ptr=ptr->next;
i++;
        }
  newnode->pre=ptr->next->pre;
			newnode->next=ptr->next;
		ptr->next=newnode;
		newnode->next->pre=newnode;
}
     
    }
    void insertAfterindex()
    {
 int index;
    	struct Node*newnode;
	newnode=(struct Node*)malloc(sizeof(struct Node));
	printf("enter data for inserting After Index:\n");
	scanf("%d",&newnode->data);
    printf("enter the index :\n");
    scanf("%d",&index);
    int i=1;
    	if(index<1)
	{
		printf("invalid condition");
	}
  else if (index==1)
    {
        insertatBeg();
    }
    else
    {
    struct Node*ptr=head;
        while(i<index){
ptr=ptr->next;
i++;
        }
  newnode->pre=ptr->next->pre;
			newnode->next=ptr->next;
		ptr->next=newnode;
		newnode->next->pre=newnode;
    }
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
printf("\n");
insertatBeg();
display();
printf("\n");
insertAtEnd();
display();
printf("\n");
insertAtIndex();
display();
printf("\n");
 insertAfterindex();
display();
return 0;
}