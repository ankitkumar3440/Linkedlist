#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
};
struct Node*head;
void linkedlistTraversal(struct Node*temp)
{
	if(head==0)
	{
		printf("list is empty");
	}
	else{
		temp=head;
		while(temp->next!=head)
		{
			printf("%d\n",temp->data);
			temp=temp->next;
		}
		printf("%d\n",temp->data);
	}
}
void createcircular()
{
	int choice=1;
	struct Node*newnode;
	struct Node*temp;
	head=NULL;
	while(choice){
	newnode=(struct Node*)malloc(sizeof(struct Node));
	printf("enter data");
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
	printf("enter 1for continue& 0for exist");
	scanf("%d",&choice);
}
printf("%d",temp->next->data);//for checking is linklist print write or Not//
}
int main()
{
	 createcircular();
	  linkedlistTraversal(head);
}

