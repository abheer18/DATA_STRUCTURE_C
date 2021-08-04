#include<stdio.h>
#include<stdio.h>
#define stacksize 10
 int stack[10];
 int choice,n,x,i,top;      /*n=size of the stack,  x=elements to be inserted,  i= for display*/
void push();
void pop();
void display();

int main()
{
  top=-1;
  printf("Enter the size of the stack :");
  scanf("%d",&n);
  printf("====STACK MENU====\n");
  printf("\n1.push \n 2.pop \n 3.display\n:");
  while(1)
  {
    printf("Enter the choice :\n");
    scanf("%d",&choice);
    switch(choice)
    {
      case 1:
      push();
      break;

      case 2:
      pop();
      break;

      case 3:
      display();
      break;
      
      case 4:
      exit(0);
    

      default:
      printf("!!ERROR, wrong choice\n");
    }
  }
}
 
  void push()
  {
      int x;
    if(top==stacksize+1)
    {
      printf("The stack is full\n");
    }
    else{
      top++;
      printf("Enter the value to be inserted:\n");
      scanf("%d",&x);
      printf("inserted in the stack :%d \n",x);
      stack[top]=x;
      
    }
  } 

  
  void pop()
  {
    if(top==-1)
    {
      printf("The stack is empty");
    }
    else{
        
      x=stack[top];
      printf("Element is deleted :%d \n",x);
      top--;
    }
  }


void display()
{
  int i;
  if(top==-1){
    printf("Stack is empty");
  }
  else
  {
    printf("displaying stack");
    for(i=top;i>=0;--i)
    printf("%d\n",stack[i]);
  } 
}
