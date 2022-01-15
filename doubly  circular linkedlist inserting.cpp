#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node*next;
	struct Node*pre;
};
struct Node* head,*tail;
void linkedlistTraversal(struct Node*ptr)
{
 ptr=head;
if(head!=0)
{
	do{
		printf("%d",ptr->data);
		ptr=ptr->next;
	}while(ptr!=tail);
		}	
			printf("%d",ptr->data);	
//printf("%d",tail->next->data);//for checking the linklist//
}
void createlinkedlist()
{
	struct Node*newnode;
	int choice=1;
	head=0;
	while(choice)
	{
		newnode=(struct Node*)malloc(sizeof(struct Node));
		printf("enter the data :");
		scanf("%d",&newnode->data);
		newnode->next=0;
		if(head==0)
		{
			head=tail=newnode;
			newnode->next=tail;
			newnode->next=tail;
		}
		else{
			tail->next=newnode;
			newnode->pre=tail;
			newnode->next=head;
			head->pre=newnode;
			tail=newnode;
		}
			printf("enter the 1 for continue and 0 for exists :");
	scanf("%d",&choice);
	}
}
 void insertAtBegining()
{
	struct Node*newnode;
	newnode=(struct Node*)malloc(sizeof(struct Node));
	printf("enter the data for inserting at begining :");
	scanf("%d",&newnode->data);
	if(head==0)
	{
		head=tail=newnode;
		newnode->next=tail;
		newnode->pre=tail;
	}
	else{
		newnode->next=head;
		head->pre=newnode;
		head=newnode;
		newnode->pre=tail;
		tail->next=newnode;
	}
}
  void insertAtEnd()
{
	struct Node*newnode;
	newnode=(struct Node*)malloc(sizeof(struct Node));
	printf("enter the data for inserting at end :");
		scanf("%d",&newnode->data);
	if(head==0)
	{
		head=tail=newnode;
		newnode->next=tail;
		newnode->pre=tail;
	}
	else
	{
		newnode->pre=tail;
		tail->next=newnode;
		newnode->next=head;
		head->pre=newnode;
		tail=newnode;
	}
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
	}while(ptr!=tail);
		}	
		return count;
	}
void insertAtspecificPosition()
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
		insertAtBegining();
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
	ptr->next->pre=newnode;
	newnode->pre=ptr;
	ptr->next=newnode;
	}
}
int main()
{
	 createlinkedlist();
	  linkedlistTraversal(head);
	  printf("\n");
	  insertAtBegining();
	    linkedlistTraversal(head);
	      printf("\n");
	    insertAtEnd();
	      linkedlistTraversal(head);
	         printf("\n");
	          insertAtspecificPosition();
	           linkedlistTraversal(head);
}

