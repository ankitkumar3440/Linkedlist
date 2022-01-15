#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node*next;
	struct Node*pre;
};
struct Node*head,*tail;
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
struct Node*insertatBegining( struct Node* head,int n)
{
	struct Node*p=(struct Node*)malloc(sizeof(struct Node));
	if(head==NULL)
	{
		p->data=n;
		p->pre=NULL;
		p->next=NULL;
		head=p;
		tail=p;
		return head;
	}
	else{
	
	p->data=n;
	head->pre=p;
	p->next=head;
	p->pre=NULL;
	head=p;
	tail=p;
	return head;
	}
}
struct Node*insertatEnd( struct Node* head ,struct Node*tail,int n)
{
		struct Node*p=(struct Node*)malloc(sizeof(struct Node));
		if(head==NULL)
	{
		p->data=n;
		p->pre=NULL;
		p->next=NULL;
		head=p;
		tail=p;
		return head;
	}
	else
	{
		struct Node*ptr=tail;
		p->data=n;
		p->pre=tail;
		p->next=NULL;
		ptr->next=p;
		tail=p;
		return head;
	}
}

struct Node*insertatPosition(struct Node * head,int position,int n)
{
	if(position<1)
	{
		return 0;
	}
	else if(position==1)
	{
		head=insertatBegining(head,n);
	}
	else{
		struct Node*ptr=head;
		struct Node*p=(struct Node*)malloc(sizeof(struct Node));
		int i=1;
		while(i<position-1)
		{
			ptr=ptr->next;
			i++;
		}
		p->data=n;
	
		p->pre=ptr;
			p->next=ptr->next;
		ptr->next=p;
		p->next->pre=p;
		return head;
	}
}
struct Node*insertAfterPosition(struct Node * head,int position,int n)
{
	if(position<1)
	{
		return 0;
	}
	else if(position==1)
	{
		head=insertatBegining(head,n);
	}
	else{
		struct Node*ptr=head;
		struct Node*p=(struct Node*)malloc(sizeof(struct Node));
		int i=1;
		while(i<position)
		{
			ptr=ptr->next;
			i++;
		}
		p->data=n;
	
		p->pre=ptr;
			p->next=ptr->next;
		ptr->next=p;
		p->next->pre=p;
		return head;
	}

}
int main()
{
		struct Node*head=NULL;
		struct Node*tail=NULL;
		struct Node*first=(struct Node*)malloc(sizeof(struct Node));
			struct Node*second=(struct Node*)malloc(sizeof(struct Node));
				struct Node*third=(struct Node*)malloc(sizeof(struct Node));
				first->data=4;
				first->pre=NULL;
				first->next=second;
				head=first;
				tail=first;
				second->data=5;
				tail=second;
				second->pre=first;
				second->next=third;
				third->data=6;
				third->pre=second;
				third->next=NULL;
				tail=third;
				linkedlistTraversal(head);
				printf("\n");
				linkedlistinverseTraversal(head);
					printf("\n");
					head=insertatBegining(head,8);
					linkedlistTraversal(head);
					printf("\n");
							linkedlistinverseTraversal(head);
						printf("\n");
	head=insertatEnd(head,tail,10);
		linkedlistTraversal(head);
		printf("\n");
			linkedlistinverseTraversal(head);
				printf("\n");
			head=insertatPosition(head,2,67);
		linkedlistTraversal(head);
			printf("\n");
	head=insertatPosition(head,1,65);
	linkedlistTraversal(head);
		printf("\n");
							linkedlistinverseTraversal(head);
							printf("\n");
						head=insertAfterPosition(head,3,77);
							linkedlistTraversal(head);
				return 0;	
}

