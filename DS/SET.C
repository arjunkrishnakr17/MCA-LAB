#include<stdio.h>
#include<conio.h>
int u[10],a[10],b[10],i,n;
int pos(int x)
{
int f=-1;
for(i=0;i<n;i++)
{
if(x==u[i])
{
f=i;
}
}
return f;
}
void display(int x[10])
{
printf("\n{");
for(i=0;i<n;i++)
{
if(x[i]==1)
printf("%d\t",u[i]);
}
printf("}");
}
void bitdisplay(int x[10])
{
printf("\n{");
for(i=0;i<n;i++)
{
printf("%d\t",x[i]);
}
printf("}");
}
void setunion()
{
printf("\n{");
for(i=0;i<n;i++)
{
(a[i]|b[i]==1)? printf(" 1"):printf(" 0 ");
}
printf("}");
}
void intersection()
{
printf("\n{");
for(i=0;i<n;i++)
{
(a[i]&b[i]==1)? printf(" 1"):printf(" 0 ");
}
printf("}");
}
void difference()
{
printf("\n{");
for(i=0;i<n;i++)
{
(a[i]&(!b[i])==1)? printf(" 1"):printf(" 0 ");
}
printf("}");
}


void main()
{
int m,k,x,i;
clrscr();
printf("\nenter the size of universal set: ");
scanf("%d",&n);
printf("\nenter the elements of universal set: ");
for(i=0;i<n;i++)
{
scanf("%d",&u[i]);
a[i]=0;
b[i]=0;
}
bitdisplay(u);
bitdisplay(a);
bitdisplay(b);
printf("\nenter the size of set1: ");
scanf("%d",&m);
printf("\nenter the elements of set1: ");
for(i=0;i<m;i++)
{
scanf("%d",&x);
if (pos(x)!=-1)
a[pos(x)]=1;
}
bitdisplay(a);
printf("\nenter the size of set2: ");
scanf("%d",&k);
printf("\nenter the elements of set2: ");
for(i=0;i<k;i++)
{
scanf("%d",&x);
if(pos(x)!=-1)
b[pos(x)]=1;
}
bitdisplay(b);
printf("\nuniversal set: ");
bitdisplay(u);
printf("\nset1: ");
display(a);
printf("\nset2: ");
display(b);
printf("\nbitstring of universal set: ");
printf("\n{ ");
for(i=0;i<n;i++)
{
printf("1 ");
}
printf("}");
printf("\nbitstring of set1: ");
bitdisplay(a);
printf("\nbitstring of set2: ");
bitdisplay(b);
printf("\nunion: ");
setunion();
printf("\nintersection: ");
intersection();
printf("\ndifference: ");
difference();
getch();
}



