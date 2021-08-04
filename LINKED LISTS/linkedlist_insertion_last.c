#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

void traverse(struct node *temp)
{
    printf("The elements are :");
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }

};

void print(struct node *p)
{
    printf("The new node is = %d\n",p->data);
   
};

int main()
{                                            //defining the nodes
    struct node *head=NULL;
    struct node *first=NULL;
    struct node *second=NULL;
    struct node *third=NULL;
    struct node *newnode=NULL;

//allocation of the memory
    head=(struct node*)malloc(sizeof(struct node));
    first=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    newnode=(struct node*)malloc(sizeof(struct node));

 //linking the list
    struct node *temp=head;
    head->next=first;

    first->data=2;
    first->next=second;

    second->data=4;
    second->next=third;

    third->data=6;
    third->next=newnode;

    newnode->data=8;
    newnode->next=NULL;

    traverse(temp->next);
    print(newnode->data);

return 0;
}



