#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node*next;
};
struct Node* head,*tail;
void linkedlistTraversal(struct Node*ptr)
{
	if(head==0)
	{
		printf("empty");
	}
	else
	{
		ptr=head;
		while(ptr->next!=head)
		{
			printf("%d\n",ptr->data);
			ptr=ptr->next;
		}
			printf("%d",ptr->data);
	}
}
void linkedlistInverseTraversal()
{
	struct Node*current,*nextnode;
	current=tail->next;
	nextnode=current->next;
	if(tail==0)
	{
		printf("empty");
	}
	else if(tail->next==tail)
{
		linkedlistTraversal(head);
}
	else{
		while(current!=tail)
		{
			current=nextnode;
			nextnode=current->next;
			current->next=head;
			nextnode->next=current;
		}
	}
		tail->next=nextnode;
		head->next=tail;
}
void DeleteatBegining()
{
if(head==NULL)
	{
	printf("empty");
	}
	else{
	struct Node*ptr=head;
		head=head->next;
		tail->next=head;
		free(ptr);
}
}
void DeleteAtEnd()
{
	struct Node*temp=head;
	struct Node*prev;
	if(head==NULL)
	{
	printf("empty");
	}
	else if(temp->next==temp)
	{
		tail=0;
		free(temp);
	}
	else{
		while(temp->next!=head){
			prev=temp;
			temp=temp->next;
		}
		prev->next=tail->next;
		tail=prev;
		free(temp);
	}
}
int getlength()
{
	struct Node*ptr;
	ptr=head;
	int count=0;
	if(head!=0)
	{
		do{
			ptr=ptr->next;
			count++;
		}
		while(ptr!=head);
	}
	return count;
}
void DeletionAtspecificposition()
{
		int position,l;
		l=getlength();
		printf("enter the position");
		scanf("%d",&position);
		if(position<0||position>l)
		{
			printf("invalid postion");
		}
		else if(position==1)
		{
			DeleteatBegining();
		}
		else{
			struct Node*ptr=head;
			struct Node*temp;
			int i=1;
			while(i<position-1)
			{
				ptr=ptr->next;
				i++;
			}
			temp=ptr->next;
			ptr->next=temp->next;
			free(temp);
		}
}
void createcircular()
{
	struct Node*newnode;
	int choice=1;
	head=0;
	while(choice)
	{
		newnode=(struct Node*)malloc(sizeof(struct Node));
		printf("enter the data :");
		scanf("%d",&newnode->data);
		newnode->next=0;
		if(head==0)
		{
			head=tail=newnode;
				tail->next=head;
		}
		else{
			tail->next=newnode;
		tail=newnode;
			tail->next=head;
		}
	printf("enter 1 for continue and 0 for exist :");
	scanf("%d",&choice);
	}
//	printf("%d",temp->next->data);
}
int main()
{
	createcircular();
	linkedlistTraversal(head);
	printf("\n");
//linkedlistInverseTraversal();
//linkedlistTraversal(head);
	printf("\n");
		printf("after deletion at begining the linkedlist are :");
	printf("\n");
 DeleteatBegining();
linkedlistTraversal(head);

	printf("\n");
	printf("after deletion at end the linkedlist are :");
	printf("\n");
	DeleteAtEnd();
linkedlistTraversal(head);
	printf("\n");
			printf("after deletion at specific position the linkedlist are :");
				printf("\n");
				DeletionAtspecificposition();
				linkedlistTraversal(head);
				return 0; 
}
