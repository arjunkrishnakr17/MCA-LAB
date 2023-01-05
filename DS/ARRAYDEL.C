#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,n,pos,x;
clrscr();
printf("enter the limit of the array: ");
scanf("%d",&n);
printf("enter the elements of the array: ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter the position of element to be deleted: ");
scanf("%d",&pos);
for(i=pos-1;i<n-1;i++)
{
 a[pos-1]=a[pos];
 pos++;
}
printf("elements in the array are: ");
for(i=0;i<n-1;i++)
printf("%d\t",a[i]);
getch();
}
