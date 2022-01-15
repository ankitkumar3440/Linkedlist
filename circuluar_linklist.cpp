#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node*next;
};
struct Node*head;
void linkedlistTraversal(struct Node*temp)
{
	if(head==0)
	{
		printf("empty");
	}
	else
	{
		temp=head;
		while(temp->next!=head)
		{
			printf("%d\n",temp->data);
			temp=temp->next;
		}
		printf("%d",temp->data);
	}
}
void cratecircularlinklist()
{
	int choice=1;
	struct Node*newnode,*temp;
	head=0;
	while(choice){
	newnode=(struct Node*)malloc(sizeof(struct Node));
	printf("enter the data :");
	scanf("%d",&newnode->data);
	newnode->next=0;
	if(head==0)
	{
		head=temp=newnode;
	}
	else
	{
		temp->next=newnode;
		temp=newnode;
	}
	temp->next=head;
	printf("enter 1 for continue and 0 for exist :");
	scanf("%d",&choice);
}
//printf("%d",temp->next->data);
}
void insertAtBeg()
{
	struct Node*temp,*newnode;
	newnode=(struct Node*)malloc(sizeof(struct Node));
	printf("enter data for inserting at begining :");
	scanf("%d",&newnode->data);
	newnode->next=0;
	if(head==0)
	{
		head=temp=newnode;
		temp->next=head;
	}
	else
	{
		head=newnode;
		newnode->next=temp->next;
		temp->next=newnode;
	}
	//printf("%d",temp->next->data);
}
void insertAtEnd()
{
	struct Node*newnode,*temp;
	newnode=(struct Node*)malloc(sizeof(struct Node));
	printf("enter data for insert at end of linklist :");
	scanf("%d",&newnode->data);
	newnode->next=0;
	if(head==0)
	{
		insertAtBeg();
	}
	else
	{
		newnode->next=temp->next;
		temp->next=newnode;
		temp=newnode;
	}
		//printf("%d",temp->next->data);
}
int getlength()
{
	struct Node*ptr=head;
	int count=0;
	if(head!=0)
	{
		do{
			ptr=ptr->next;
			count++;
		}
		while(ptr!=head);
	}
return count;
}
void InsertAtspecificposition()
{
	struct Node*ptr,*newnode;
	int position,i=1,l;
	printf("enter the position");
	scanf("%d",&position);
	l=getlength();
	if(position<0||position>l)
	{
		printf("invalid position");
	}
	else if(position==1)
	{
		insertAtBeg();
	}
	else{
	newnode=(struct Node*)malloc(sizeof(struct Node));
	printf("enter the data for inserting at position :");
	scanf("%d",&newnode->data);
	newnode->next=0;
	ptr=head;
	while(i<position-1)
	{
		ptr=ptr->next;
		i++;
	}
	newnode->next=ptr->next;
	ptr->next=newnode;
}
}
int main()
{
	cratecircularlinklist();
	insertAtBeg();
	insertAtEnd();
	InsertAtspecificposition();
	printf("\n");
	linkedlistTraversal(head);
	return 0;
}
