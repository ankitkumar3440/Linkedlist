#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
	struct Node*pre;
};
struct Node*head;
void linkedlistTraversal(struct Node*ptr)
{
	while(ptr->next!=NULL)
	{
		printf("%d",ptr->data);
		ptr=ptr->next;
	}
}
int main()
{
	struct Node*head;
		struct Node*first;
			struct Node*second;
				struct Node*third;
					head=(struct Node*)malloc(sizeof(struct Node));
						first=(struct Node*)malloc(sizeof(struct Node));
							second=(struct Node*)malloc(sizeof(struct Node));
								third=(struct Node*)malloc(sizeof(struct Node));
									head->data=5;
											first->data=10;
						second->data=20;
						third->data=30;
						head->pre=NULL;
						head->next=first;
									first->next=second;
									first->pre=head;
									
								
									second->next=third;
									second->pre=first;
										
								
									third->next=NULL;
	third->pre=second;
									linkedlistTraversal(head);
									return 0;
}
