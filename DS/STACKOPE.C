#include<stdio.h>
#include<conio.h>
int top=-1,stack[10],n;
void push()
{
  int x;
  if(top==n)
  {
   printf("stack overflow");
   }
   else
   {
   printf("enter element to be insterted: \n");
   scanf("%d",&x);
    top++;
    stack[top]=x;
    printf("element inserted\n");
   }
}
void pop()
{
 if(top==-1)
 printf("stack underflow\n");
 else
 {
 printf("element deleted\n");
 top--;
 }
 }
void traverse()
{
 int i;
 if(top==-1)
 printf("\nno elements in stack");
 else
 {
  printf("\nelements in stack are:");
  for(i=top;i>=0;i--)
  printf("\n%d",stack[i]);
  }
 }
 void main()
 {
 int choice;
 printf("enter the size of stack: ");
 scanf("%d",&n);
 clrscr();
 printf("\n1.push\n2.pop\n3.traverse\n4.exit\n");
 do
 {
 printf("\nenter your choice: ");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1:push();
 break;
 case 2:pop();
 break;
 case 3:traverse();
 break;
 case 4:exit();
 break;
 default:printf("invalid choice");
 break;
 }
 }
 while(choice!=4);
 getch();
 }