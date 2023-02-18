#include<stdio.h>
#include<conio.h>
int q[10],front=-1,rear=-1,i,size,x;
void insert()
{
printf("\nenter the element to be inserted: ");
scanf("%d",&x);
if(front==rear+1&&rear==size-1)
printf("\nqueue is full");
else if(front==-1&&rear==-1)
{
printf("\nqueue was empty and 1st element is inserted");
front=0;
rear=0;
q[rear]=x;
}
else if(rear==size-1)
{
rear=0;
q[rear]=x;
printf("\nelement inserted");
}
else
{
rear++;
q[rear]=x;
printf("\nelement inserted");
}
}
void deletion()
{
if(front==-1&&rear==-1)
printf("\nqueue is empty");
else if(front==rear)
{
printf("\nonly one element in queue and the element is deleted");
front=-1;
rear=-1;
}
else if(front==size-1)
{
front=0;
printf("\nelement deleted");
}
else
{
front++;
printf("\nelement deleted");
}
}
void display()
{
if(front==-1&&rear==-1)
printf("\nno elements to display");
else if(front<=rear)
{
printf("\nelements in queue are: ");
for(i=front;i<=rear;i++)
printf("\t%d",q[i]);
}
else
{
printf("\nelements in queue are: ");
for(i=front;i<=size-1;i++)
printf("%d",q[i]);
for(i=0;i<=rear;i++)
printf("\t%d",q[i]);
}
}
void main()
{
int choice;
clrscr();
printf("\nenter the size of queue: ");
scanf("%d",&size);
printf("\n1.insert\n2.delete\n3.display\n4.exit");
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
default:printf("invalid choice");
break;
}
}
while(choice!=4);
getch();
}
