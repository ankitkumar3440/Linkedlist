#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node* next;
};
void linkedlistTraversal(struct Node*ptr)
{
	while(ptr!=NULL)
	{
		printf("%d\n",ptr->data);
		ptr=ptr->next;	}
}
struct Node*insertatfirst(struct Node*head,int n)
{
	struct Node *p=(struct Node*)malloc(sizeof(struct Node));
	p->data=n;
	p->next=head;
	head=p;
}
struct Node*insertatIndex(struct Node * head,int n,int Index)
{
	struct Node*ptr;
		ptr=(struct Node*)malloc(sizeof(struct Node));
		struct Node*p=head;
		int i=1;
		while(i!=Index-1)
		{
			p=p->next;
			i++;
		}
		ptr->data=n;
		ptr->next=p->next;
		p->next=ptr;
		return head;
}
struct Node*insertatEnd(struct Node*head,int n){
	struct Node*p;
	p=(struct Node*)malloc(sizeof(struct Node));
	struct Node*ptr=head;
		p->data=n;
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
	p->next=ptr->next;
	ptr->next=p;
	return head;	
}
struct Node*insertatelement(struct Node*head,int n,int m)
{
	struct Node*p=(struct Node*)malloc(sizeof(struct Node));
	struct Node*ptr=head;
	while(ptr->data!=n&&ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
	p->data=m;
	p->next=ptr->next;
	ptr->next=p;
	return head;
}
int main()
{
	struct Node* head;
		struct Node* first;
			struct Node* second;
				struct Node* third;
						struct Node* fourth;
	head=(struct Node *) malloc(sizeof(struct Node));
	second=(struct Node *) malloc(sizeof(struct Node));
	third=(struct Node *) malloc(sizeof(struct Node));
	fourth=(struct Node *) malloc(sizeof(struct Node));
	head->data=7;
	head->next=second;
	second->data=44;
	second->next=third;
	third->data=66;
	third->next=fourth;
	fourth->data=99;
	fourth->next=NULL;
	linkedlistTraversal(head);
	printf("\n");
	head=insertatfirst(head,56);
	linkedlistTraversal(head);
	printf("\n");
		head=insertatIndex(head,77,1);
		linkedlistTraversal(head);
		printf("\n");
		head=insertatEnd(head,89);
		linkedlistTraversal(head);
		printf("\n");
		head=insertatelement(head,66,80);
		linkedlistTraversal(head);
	return 0;
}

