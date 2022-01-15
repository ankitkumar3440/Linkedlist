#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node*next;
	struct Node*pre;
};
struct Node*head;
void linkedlistTraversal(struct Node*node)
{
	while(node!=NULL)
	{
		printf("%d\n",node->data);
		node=node->next;
	}
}
void linkedlistinverseTraversal(struct Node* lastnode)
{
	struct Node*lastNode=head;
	if(lastnode==NULL)
	return;
	while(lastnode->next!=NULL)
	{
		lastnode=lastnode->next;
	}
	while(lastnode!=NULL)
	{
			printf("%d\n",lastnode->data);
			lastnode=lastnode->pre;
	}
}
struct Node*insertatBegining( struct Node* head ,int n)
{
	struct Node*p=(struct Node*)malloc(sizeof(struct Node));
	if(head=NULL)
	{
		p->data=10;
		p->pre=NULL;
		p->next=NULL;
		head=p;
		return head;
	}
	else{
	
	p->data=n;
	head->pre=p;
	p->next=head;
	p->pre=NULL;
	head=p;
	return head;
	}
}
int main()
{
	struct Node*head=NULL;
		struct Node*first=(struct Node*)malloc(sizeof(struct Node));
			struct Node*second=(struct Node*)malloc(sizeof(struct Node));
				struct Node*third=(struct Node*)malloc(sizeof(struct Node));
				first->data=4;
				first->pre=NULL;
				first->next=second;
				head=first;
				second->data=5;
				second->pre=first;
				second->next=third;
				third->data=6;
				third->pre=second;
				third->next=NULL;
				linkedlistTraversal(head);
				printf("\n");
				linkedlistinverseTraversal(head);
				printf("\n");
				head=insertatBegining(head,8);
					linkedlistTraversal(head);

				return 0;
}
