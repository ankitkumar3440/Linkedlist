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
 void deleteatbeg(){
     struct Node*temp=head;
     if (head==0)
     {
        printf("empty") ;
     }
     else
     {
         head=head->next;
     }
 }
 void delteAtEnd(){
     struct Node*temp=head;
     struct Node*ptr=head->next;
     while (ptr->next!=0)
     {
         temp=temp->next;
         ptr=ptr->next;
     }
     temp->next=NULL;
     free(ptr);
 }
 void DeleteAtIndex(){
     
 }
int main()
{
    create();
printf("\n");
 linedlistTraversal(head);
 printf("\n");
 printf("linkedlist after deletio from begining \n");
 deleteatbeg();
  linedlistTraversal(head);
 printf("\n");
  printf("linkedlist after deletio from end\n");
   delteAtEnd();
     linedlistTraversal(head);
    return 0;
}