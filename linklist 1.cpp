//single linklist//
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
	struct node*head;
};
void insert(int n)
{
	struct node*p;
	p=(struct node*)malloc(size of(struct node));
	p->data=n;
	p->next=head;
	head=p;

}
int main()
{

	insert(10);
	insert(20);
	insert(30);
	return 0;
}
}
