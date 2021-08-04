#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void delete();

struct node
{
int info;
struct node *next;
};
struct node *start=NULL;

int main()
{
printf("ABHEER MEHROTRA \n");
printf("2K20CSUN01002 \n");
int choice;
printf("\n*****LIBRARY BOOK RECORDS*****\n");
printf("1.Create new book ID \n");
printf("2.display \n");
printf("3.delete ID \n");
printf("4. EXIT \n");
printf("\n");
while(1){
printf("\n enter your choice:\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
create();
break;

case 2:
display();
break;

case 3:
delete();
break;

case 4:
exit(0);
break;

default:
printf("wrong choice \n");
break;
}
}
return 0;
}

void create()
{
struct node *temp,*ptr;
temp=(struct node *)malloc(sizeof(struct node));
printf("enter the value for the book id: \n");
scanf("%d",&temp->info);
temp->next=NULL;
if(start==NULL)
{
start=temp;
}
else
{
ptr=start;
while(ptr->next!=NULL)
{
ptr=ptr->next;
}
ptr->next=temp;
}
}

void display()
{
struct node *ptr;
if(start==NULL)
{
printf("Digital book shelf is empty \n");
return;
}
else
{
ptr=start;
printf("The book ids are:\n");
while(ptr!=NULL)
{
printf("%d \t \n",ptr->info );
ptr=ptr->next ;
}
}
}


void delete()
{
int i,pos;
struct node *temp,*ptr;
if(start==NULL)
{
printf("\n The bookshelf is empty:\n");
exit(0);
}
else
{
printf("\n Enter the id of the book to be deleted:  \n");
scanf("%d",&pos);
if(pos==0)
{
ptr=start;
start=start->next ;
printf("\n The deleted book is:%d \n",ptr->info  );
free(ptr);
}
else
{
ptr=start;
for(i=0;i<pos;i++) {
temp=ptr;
ptr=ptr->next ;
if(ptr==NULL)
{
printf("\n book id not Found: \n");
return;
}
}
temp->next =ptr->next ;
printf("\n The deleted book id  is:%d \n",ptr->info );
free(ptr);
}
}
}