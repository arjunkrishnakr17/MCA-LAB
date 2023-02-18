#include<stdio.h>
#include<conio.h>

int front=0,rear=0,n,x,i,q[10];
void insert(void)
{
printf("\nenter the element to be inserted: ");
scanf("%d",&x);
if(rear==n)
printf("\nqueue is full");
else
{
printf("\nelement is inserted");
q[rear]=x;
rear++;
}
}
void deletion(void)
{
if(rear==0)
printf("\nqueue is empty");
else
{
printf("\nelement deleted");
for(i=0;i<rear;i++)
{
q[i]=q[i+1];
}
rear--;
}
}
void display(void)
{
if(rear==0)
printf("queue is empty");
else
{
printf("\nelements in queue are: ");
for(i=0;i<rear;i++)
printf("\t%d",q[i]);
}
}
void main()
{
int choice;
clrscr();
printf("\nenter the size of queue: ");
scanf("%d",&n);
printf("\n1.insertion\n2.deletion\n3.display\n4.exit");
do
{
printf("\nenter your choice: ");
scanf("%d",&choice);
switch(choice)
{
case 1:insert();
break;
case 2:deletion();
break;
case 3:display();
break;
case 4:exit();
break;
default:printf("\ninvalid choice");
}
}
while(choice!=4);
getch();
}





