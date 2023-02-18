#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int data;
struct node* link;
};
int count;
struct node* root;
void beginsert()
{
struct node* temp;
temp=(struct node*)malloc(sizeof(struct node));
temp->link=NULL;
printf("\nenter the data to be inserted: ");
scanf("%d",&temp->data);
if(root==NULL)
{
root=temp;
}
else
{
temp->link=root;
root=temp;
}
}
void lastinsert(void)
{
struct node* temp;
temp=(struct node*)malloc(sizeof(struct node));
printf("\nenter the data to be inserted: ");
scanf("%d",&temp->data);
temp->link=NULL;
if(root==NULL)
{
root=temp;
}
else
{
struct node* p;
p=(struct node*)malloc(sizeof(struct node));
p=root;
while(p->link!=NULL)
{
p=p->link;
}
p->link=temp;
}
}
void posinsert(void)
{
struct node* temp;
int pos,len,i=1;
temp=(struct node*)malloc(sizeof(struct node));
printf("\nenter the position of the node to be inserted: ");
scanf("%d",&pos);
if(pos>length())
{
printf("\ninvalid position");
}
else
{
struct node* p;
printf("\nenter the data to be inserted: ");
scanf("%d",&temp->data);
p=root;
while(i<pos-1)
{
i++;
p=p->link;
}
temp->link=p->link;
p->link=temp;
}
}
void begdelete()
{
struct node* p=root;
if(root==NULL)
printf("\nlist is empty");
else
{
root=p->link;
p->link=NULL;
printf("\nfirst node deleted");
}
}
void posdelete(void)
{
int i=1,pos,len;
struct node* p=root;
struct node* temp;
printf("\nenter the position of the node to be deleted: ");
scanf("%d",&pos);
len=length();
if(len==0)
{
printf("\ncant delete node");
}
else if(pos>len)
{
printf("\ninvalid position");
}
else
{
while(i<pos-1)
{
p=p->link;
i++;
}
temp=p->link;
p->link=temp->link;
temp->link=NULL;
printf("\nnode deleted at position %d",pos);
printf("\nnow length of linked list=%d",len-1);
}
}
void lastdelete(void)
{
int i=1,len;
struct node* p=root;
struct node* temp;
len=length();
if(len==0)
printf("\ncant delete node");
else
{
while(i<len-1)
{
p=p->link;
i++;
}
temp=p->link;
p->link=temp->link;
printf("\nnode deleted");
printf("\nnow length=%d",len-1);
}
}
int length(void)
{
count=0;
if(root==NULL)
printf("\nlist is empty");
else
{
struct node* temp;
temp=(struct node*)malloc(sizeof(struct node));
temp=root;
while(temp!=NULL)
{
count++;
temp=temp->link;
}
printf("length of the list = %d",count);
}
return count;
}
void display(void)
{
if(root==NULL)
printf("\nlist is empty");
else
{
struct node* temp;
temp=root;
while(temp!=NULL)
{
printf("%d-->",temp->data);
temp=temp->link;

}
printf("NULL");
}
}
void search(void)
{
int count=1,x,f=0;
struct node* p=root;
if(p==NULL)
{
printf("\nlist is empty");
}
else
{
printf("\nenter the element to be searched: ");
scanf("%d",&x);
while(p!=NULL)
{
if(p->data==x)
{
f=1;
break;
}
count++;
p=p->link;
}
if(f==0)
printf("\nelement not found");
else
printf("\nelement found at position:%d",count);
}
}
void main()
{
int choice;
clrscr();
printf("\n1.beginsert\n2.lastinsert\n3.posinsert\n4.begdelete\n5.posdelete\n6.lastdelete\n7.length\n8.display\n9.search\n10.exit");
do
{
printf("\nenter your choice: ");
scanf("%d",&choice);
switch(choice)
{
case 1:beginsert();
break;
case 2:lastinsert();
break;
case 3:posinsert();
break;
case 4:begdelete();
break;
case 5:posdelete();
break;
case 6:lastdelete();
break;
case 7:length();
break;
case 8:display();
break;
case 9:search();
break;
case 10:exit(1);
break;
default:printf("\ninvalid choice");
break;
}
}
while(choice!=10);
getch();
}


