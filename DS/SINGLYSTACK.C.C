#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int data;
struct node* link;
};
struct node* top;
void push(void)
{
struct node* temp;
temp=(struct node*)malloc(sizeof(struct node));
printf("\nenter node data: ");
scanf("%d",&temp->data);
temp->link=top;
top=temp;
printf("\ndata inserted into stack");
}
void pop(void)
{
struct node* temp;
if(top==NULL)
printf("\nstack is empty");
else
{
temp=top;
top=temp->link;
temp->link=NULL;
free(temp);
}
}
void display(void)
{
struct node* temp;
if(top==NULL)
printf("\nstack is empty");
else
{
temp=top;
while(temp!=NULL)
{
printf("%d\n",temp->data);
temp=temp->link;
}
}
}
void search(void)
{
struct node* temp;
int x,i=1,f=0;
if(top==NULL)
printf("\nstack is empty");
else
{
temp=top;
printf("enter data to be searched: ");
scanf("%d",&x);
while(temp!=NULL)
{
if(temp->data==x)
{
f=1;
break;
}
i++;
temp=temp->link;
}
if(f==0)
printf("\nelement not found");
else
printf("\nelement found at position %d",i);
}
}
void main()
{
int choice;
clrscr();
printf("\n1.push\n2.pop\n3.display\n4.exit\n5.search");
while(1)
{
printf("\nenter your choice: ");
scanf("%d",&choice);
switch(choice)
{
case 1:push();
break;
case 2:pop();
break;
case 3:display();
break;
case 4:exit(0);
break;
case 5:search();
break;
default:printf("\ninvalid choice");
break;
}
}

}
