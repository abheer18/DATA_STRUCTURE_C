//doubly linked list

#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};

void print(struct node *temp)
{
    while(temp!=NULL ){
    printf("The new node is = %d\n",temp->data);
    }   
};

int main()
{ 
    struct node *head;
    struct node *first=NULL;
    struct node *second=NULL;
    struct node *third=NULL;
    struct node *fourth=NULL;


first=(struct node*)malloc(sizeof(struct node));
second=(struct node*)malloc(sizeof(struct node));
third=(struct node*)malloc(sizeof(struct node));
fourth=(struct node*)malloc(sizeof(struct node));

struct node*temp=head;
head=first;

first->data=10;
second->data=12;
third->data=14;
fourth->data=16;


first->next=second;
first->prev=NULL;

second->next=third;
second->prev=first;

third->next=fourth;
third->prev=second;

fourth->next=NULL;
fourth->prev=third;

print(first->data);

return 0;
}
