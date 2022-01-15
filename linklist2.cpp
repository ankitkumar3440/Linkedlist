#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node * next;
};
void linkedlistTraversal(struct Node*ptr){
	
	while(ptr!=NULL){
	printf("%d\n",ptr->data);
	ptr=ptr->next;
}
}
struct Node* insert( struct Node* head,int n)
{
	struct Node*p;
	p=(struct Node*) malloc(sizeof(struct Node));
	p->data=n;
	p->next=head;
	head=p;
	return p;
}
int main(){
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
head=	insert(head,56);
		linkedlistTraversal(head);
		return 0;
	
}
