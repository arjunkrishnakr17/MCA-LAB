#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],n,pos,x,i;
clrscr();
printf("enter the limit of the array: ");
scanf("%d",&n);
printf("enter the elements of the array: ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter the position of the element to be insterted: ");
scanf("%d",&pos);
printf("enter the element to be inserted: ");
scanf("%d",&x);
for(i=n;i>pos-1;i--)
{
a[i]=a[i-1];
}
a[pos-1]=x;
printf("elements in the array are: ");
for(i=0;i<=n;i++)
printf("%d\t",a[i]);
getch();
}