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
 
int main()
{
    create();
printf("\n");
 linedlistTraversal(head);
    return 0;
}