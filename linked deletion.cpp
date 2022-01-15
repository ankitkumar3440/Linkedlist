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
		int value=66;//deletion at given value//
		struct Node*a=head;
		struct Node*b=a->next;
		while(a->data!=value&&a->next!=NULL)
		{
			a=a->next;
			b=b->next;
		}		if(a->data==value)
		{
			head=head->next;
		}
		a->next=b->next;
		free(b);
			linkedlistTraversal(head);
			printf("\n");
			//deletion of a given index//
			
	return 0;
}
