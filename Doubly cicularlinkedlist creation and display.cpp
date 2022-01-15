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
printf("%d",tail->next->data);
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
int main()
{
	 createlinkedlist();
	  linkedlistTraversal(head);
}

