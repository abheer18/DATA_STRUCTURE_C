#include<stdio.h>
#include<stdlib.h>
int stack[10],choice,n,top,x,i;
void push(void);
int main()
{
top=-1;
printf("\n Enter the size of stack");
scanf("%d",&n);
printf("enter \n 1.push \n 2. exit\n");
while(1)
{
printf("\n enter the choice");
scanf("%d",&choice);
switch(choice)
{
case 1:
push();
break;

case 2:
exit(0);
break;

default:
printf("wrong choice \n");
break;
}
}
return 0;
}

void push()
{
if(top>=n-1)
{
printf("overflow \n");
}
else
{
printf("enter a value to be inserted \n");
scanf("%d",&x);
printf("the element pushed in stack is %d",x);
top++;
stack[top]=x;
}
}
