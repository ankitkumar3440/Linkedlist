//linklist Deletion
#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node* next;
};
void linkedlistTraversal(struct Node*ptr)
{
	while(ptr!=0)
	{
		printf("%d\n",ptr->data);
		ptr=ptr->next;	}
}
int main(){

	struct Node* head;
		struct Node* first;
			struct Node* second;
				struct Node* third;
						struct Node* fourth;
						struct Node*fifth;
						struct Node*sixth;
	head=(struct Node *) malloc(sizeof(struct Node));
	second=(struct Node *) malloc(sizeof(struct Node));
	third=(struct Node *) malloc(sizeof(struct Node));
	fourth=(struct Node *) malloc(sizeof(struct Node));
		fifth=(struct Node *) malloc(sizeof(struct Node));
			sixth=(struct Node *) malloc(sizeof(struct Node));
	head->data=7;
	head->next=second;
	second->data=44;
	second->next=third;
	third->data=66;
	third->next=fourth;
	fourth->data=99;
	fourth->next=fifth;
	fifth->data=34;
	fifth->next=sixth;
	sixth->data=20;
	sixth->next=NULL;
	linkedlistTraversal(head);
	printf("\n");
	struct Node*p=head;
	head=head->next;//deletion at begning//
	free(p);
	linkedlistTraversal(head);
	printf("\n");
	struct Node *ptr=head;//deletion at the last//
	struct Node*q=ptr->next;
	while(q->next!=NULL)
	{
		q=q->next;
		ptr=ptr->next;
	}
ptr->next=NULL;
free(q);
	linkedlistTraversal(head);
	printf("\n");
	//deletion of given index//
	struct Node*m=head;
		struct Node*n=head->next;
	int i=1;
	int Index=3;
	while(i==Index-1){
		m=m->next;
		n=n->next;
	i=	i+1;
	}
	m->next=n->next;
	free(n);
		linkedlistTraversal(head);
	
		return 0;
}

