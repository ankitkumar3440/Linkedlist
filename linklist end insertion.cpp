#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node*next;
};
void linkedlistTraversal(struct Node*ptr,int){
	while(ptr!=NULL)
	{
		printf("element :%d\n",ptr->data);
		ptr=ptr->next;
	}
}
struct Node* insertend(struct Node* head,int n)
{
	struct Node* ptr;
	ptr=(struct Node*) malloc(sizeof(struct Node));
	if(head==NULL)
	{
		struct Node *p;
		p->data=n;
		p->next=NULL;
		head=p;
	}
	else{
		struct Node* ptr=head;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->data=n;
		ptr->next=NULL;
		head=ptr;
		return head;
	}
}
int main()
{
		struct Node * head;
	struct Node * second;
	struct Node * third;
	struct Node * fourth;
	head=(struct Node *) malloc(sizeof(struct Node));
	second=(struct Node *) malloc(sizeof(struct Node));
	third=(struct Node *) malloc(sizeof(struct Node));
	fourth=(struct Node *) malloc(sizeof(struct Node));
	head->data=7;
	head->next=second;
	second->data=11;
	second->next=third;
	third->data=55;
	third->next=fourth;
	fourth->data=88;
	fourth->next=NULL;
		linkedlistTraversal(head,56);
		return 0;
	
}
