#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node*next;
};
struct Node*head=NULL;
   void linedlistTraversal(  struct Node*temp){
    
        if (head==0)
        {
            printf("empty");
        }
        else
        {
        while (temp->next!=0)
        {
            printf("%d",temp->data);
            temp=temp->next;
        }  
          printf("%d",temp->data);            
        }
    }
void create()
    {
        int x,choice;
         struct Node*temp=head;
        while (choice)
        {
            struct Node*newnode=(struct Node*)malloc(sizeof(struct Node));
            printf("enter the data :\n");
            scanf("%d",&newnode->data);
            newnode->next=0;
           
            if(head==0){
                head=temp=newnode;
            }
else
{
    temp->next=newnode;
    temp=newnode;
}
  printf("enter the one for continue and 0for exit: \n");
        scanf("%d",&choice);
        }
    }
 void Insertatbeg()
{
	struct Node*temp,*newnode;
	newnode=(struct Node*)malloc(sizeof(struct Node));
	printf("enter data for inserting at begining :\n");
	scanf("%d",&newnode->data);
	newnode->next=0;
    if (head==0)
    {
        head=newnode;
    }
    else
    {
        newnode->next=head;
        head=newnode;
    }
}
void insertatend()
{
    struct Node*newnode;
    newnode=(struct Node*)malloc(sizeof(struct Node));
    printf("enter the data :\n");
    scanf("%d",&newnode->data);
    newnode->next=0;
    if (head==0)
    {
       head=newnode; 
    }
    else
    {
        struct Node*temp=head;
        while(temp->next!=0){
            temp=temp->next;
        }
temp->next=newnode;
newnode->next=0;
    }
}
int getlength()
{
    int count =1;
    struct Node*temp=head;
    while (temp->next!=0)
    {
       temp= temp->next;
       count++;
    }
return count;
}
void insertatindex(){
        int x,index,l;
        l=getlength();

    struct Node*newnode;
    newnode=(struct Node*)malloc(sizeof(struct Node));
    printf("enter the data :\n");
    scanf("%d",&newnode->data);
    int i=1;
    printf("enter the index :\n");
    scanf("%d",&index);
    if (index<0 && index>l)
    {
      printf("invalid position enter other index");
    }
   else if(index==1){
             Insertatbeg();
    }
    else {
struct Node*temp=head;
    struct Node*ptr=head->next;
        while(i<index-1){
  temp=temp->next;
ptr=ptr->next;
i++;
        }
newnode->next=temp->next;
temp->next=newnode;
    }
}
int main()
{
    create();
printf("\n");
 linedlistTraversal(head);
 printf("\n");
  getlength();
 Insertatbeg();
   linedlistTraversal(head);
 printf("\n");
 insertatend();
  linedlistTraversal(head);
 printf("\n");
   insertatindex();
     linedlistTraversal(head);
    return 0;
}
