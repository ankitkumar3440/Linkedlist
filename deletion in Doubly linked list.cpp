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
struct Node*DeleteatBegining(struct Node*head)
{
	if(head==NULL)
	{
		return 0 ;
	}
	else
	{
		struct Node*ptr=head;
		head=head->next;
	head->pre=NULL;
	free(ptr);
	return head;
}
}
struct Node*DeleteatEnd(struct Node*head,struct Node*tail)
{
struct Node*ptr;
	struct Node*lastnode=tail;
	if(tail==NULL)
	{
		return 0 ;
	}
	else
{
	ptr=tail;
	
		tail=tail->pre;
		tail->next=NULL;
		
	free(ptr);
	return head;
}
}
	struct Node*DeleteatSpecificPositin(struct Node*head,int position)
{
	int postion,i=1;
	struct Node*temp;
	if(position==1)
	{
		DeleteatBegining(head);
	}
	else 
	{
		struct Node*temp=head;
	while(i<position)
	{
		temp=temp->next;
		i++;
		}	
		temp->pre->next=temp->next;
		temp->next->pre=temp->pre;
		free(temp);
		return head;
	}
}
struct Node*DeleteatAfterPositin(struct Node*head,int position)
{
	int postion,i=1;
	struct Node*temp;
	if(position==1)
	{
		DeleteatBegining(head);
	}
	else 
	{
		struct Node*temp=head;
	while(i<position-1)
	{
		temp=temp->next;
		i++;
		}	
		temp->pre->next=temp->next;
		temp->next->pre=temp->pre;
		free(temp);
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
					struct Node*fourth=(struct Node*)malloc(sizeof(struct Node));
									struct Node*fiveth=(struct Node*)malloc(sizeof(struct Node));
									struct Node*six=(struct Node*)malloc(sizeof(struct Node));
									
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
				third->next=fourth;
				tail=third;
				fourth->data=8;
				fourth->next=fiveth;
				fourth->pre=third;
				tail=fourth;
				fiveth->data=20;
				fiveth->next=six;
				fiveth->pre=fourth;
				tail=fiveth;
				six->data=80;
				six->next=NULL;
				six->pre=fiveth;
				tail=six;
				linkedlistTraversal(head);
				printf("\n");
				linkedlistinverseTraversal(head);
					printf("\n");
				head=DeleteatBegining(head);
								linkedlistTraversal(head);
										printf("\n");
								head=DeleteatEnd(head,tail);
									linkedlistTraversal(head);
									printf("\n");
										linkedlistinverseTraversal(head);
											printf("\n");
										head=DeleteatSpecificPositin(head,3);
										linkedlistTraversal(head);
												printf("\n");
										linkedlistinverseTraversal(head);
											printf("\n");
									head=DeleteatAfterPositin(head,3);
										linkedlistTraversal(head);
return 0;
}
