#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
int data;
struct node* left;
struct node* right;
};
struct node* root;
void beginsert(void)
{
struct node* temp;
temp=(struct node*)malloc(sizeof(struct node));
printf("\nenter the node data: ");
scanf("%d",&temp->data);
temp->left=NULL;
temp->right=NULL;
if(root==NULL)
{
root=temp;
printf("\nelement inserted");
}
else
{
temp->right=root;
root->left=temp;
root=temp;
printf("\nelement inserted");
}
}
void lastinsert(void)
{
struct node* temp;
struct node* p;
temp=(struct node*)malloc(sizeof(struct node));
printf("\nenter the node data: ");
scanf("%d",&temp->data);
temp->left=NULL;
temp->right=NULL;

if(root==NULL)
{
root=temp;
printf("\nelement inserted");
}
else
{
p=root;
while(p->right!=NULL)
{
p=p->right;
}
p->right=temp;
temp->left=p;
}
}
void posinsert(void)
{
int pos,i=1;
struct node* temp;
struct node* p;
struct node* q;
temp=(struct node*)malloc(sizeof(struct node));
temp->left=NULL;
temp->right=NULL;

if(root==NULL)
printf("\nlist is empty");
else
{
printf("\nenter the position: ");
scanf("%d",&pos);
if(pos>length())
printf("\ninvalid position");
else
{
printf("\nenter the node data: ");
scanf("%d",&temp->data);
p=root;
while(i<pos-1)
{
i++;
p=p->right;
}
temp->right=p->right;
p->right=temp;
temp->left=p;
q=temp->right;
q->left=temp;
printf("\node data inserted");
}
}
}
void begdelete(void)
{
struct node* p;
if(root==NULL)
printf("\nlist is empty");
else
{
p=root;
root=p->right;
p->right=NULL;
root->left=NULL;
free(p);
}
}
void lastdelete(void)
{
struct node* p;
struct node* q;
if(root==NULL)
printf("\nlist is empty");
else
{
p=root;
while(p->right!=NULL)
{
p=p->right;
}
q=p->left;
p->left=NULL;
q->right=NULL;
free(p);
}
}
void posdelete()
{
struct node* p;
struct node* q;
struct node* r;
int pos,i=1;
printf("\nenter the position to be deleted: ");
scanf("%d",&pos);
if(pos>length())
printf("\ninvalid position");
else
{
p=root;
while(i<pos)
{
i++;
p=p->right;
}
q=p->right;
p->right=NULL;
q->left=p->left;
r=p->left;
p->left=NULL;
r->right=q;
free(p);
}
}


int length(void)
{
struct node *p;
int count=1;
if(root==NULL)
printf("\nlist is empty");
else
{
p=root;
while(p!=NULL)
{
p=p->right;
count++;
}
}
return count;
}
void display(void)
{
struct node* p;
if(root==NULL)
printf("\nno elements to display: ");
else
{
p=root;
while(p!=NULL)
{
printf("%d->",p->data);
p=p->right;
}
printf("NULL");
}
}
void search(void)
{
int x,f=0,count=1;
struct node* p;
if(root==NULL)
printf("\nlist is empty");
else
{
p=root;
printf("\nenter the element to be inserted: ");
scanf("%d",&x);
while(p!=NULL)
{
if(p->data==x)
{
f=1;
break;
}
count++;
p=p->right;
}
if(f==0)
printf("\nelement not found");
else
printf("element fount at position=%d",count);
}
}
void main()
{
int choice;
clrscr();
printf("\n1.beginsert\n2.lastinsert\n3.posinsert\n4.lengtg\n5.display\n6.exit\n7begdelete\n8.lastdelete\n9.posdelete\n10.search");
while(1)
{
printf("\nenter your choice");
scanf("%d",&choice);
switch(choice)
{
case 1:beginsert();
break;
case 2:lastinsert();
break;
case 3:posinsert();
break;
case 4:printf("length=%d",length());
break;
case 5:display();
break;
case 6:exit(0);
break;
case 7:begdelete();
break;
case 8:lastdelete();
break;
case 9:posdelete();
break;
case 10:search();
break;
default:printf("\ninvalid choice");
break;
}
}
}
