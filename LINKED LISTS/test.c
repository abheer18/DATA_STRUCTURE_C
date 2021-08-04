#include<stdio.h>
#include<stdlib.h>
 
struct Node 
{
int data;
struct Node *next;
}
 
struct node *front=NULL,*rear=NULL,*temp;
 
void create();
void del();
void display();
 
int main()
{
int choice;
do
{
printf("\nMenu\n\t 1 to create the element : ");
printf("\n\t 2 to delete the element : ");
printf("\n\t 3 to display the queue : ");
printf("\n\t 4 to exit from main : ");
printf("\nEnter your choice : ");
scanf("%d",&choice);
switch(choice)
{
case 1:
create();
break;
case 2:
del();
break;
case 3:
display();
break;
case 4:
return 1;
default:
printf("\nInvalid choice :");
}
}while(1);
 
return 0;
}
 
void create()
{
struct node *newnode;
newnode=(struct node*)malloc(sizeof(node));
printf("\nEnter the node data : ");
scanf("%d",&newnode->data);
newnode->next=NULL;
if(rear==NULL)
{
front=rear=newnode;
}
else
{
rear->next=newnode;
rear=newnode;
}
rear->next=front;
}
 
void del()
{
temp=front;
if(front==NULL)
{
printf("\nUnderflow :");
}
else
{
if(front==rear)
{
printf("\n%d",front->info);
front=rear=NULL;
}
else
{
printf("\n%d",front->info);
front=front->next;
rear->next=front;
}
 
temp->next=NULL;
free(temp);
}
}
 
void display()
{
temp=front;
if(front==NULL)
printf("\nEmpty");
else
{
printf("\n");
for(;temp!=rear;temp=temp->next)
printf("\n%d address=%u next=%u\t",temp->info,temp,temp->next);
printf("\n%d address=%u next=%u\t",temp->info,temp,temp->next);
}
}