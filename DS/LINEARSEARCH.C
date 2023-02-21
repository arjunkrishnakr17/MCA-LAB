#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],n,i,x,f=0;
clrscr();
printf("enter the limit of array: ");
scanf("%d",&n);
printf("\nenter the elements in the array: ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\nenter element to be searched: ");
scanf("%d",&x);
for(i=0;i<n;i++)
{
if(a[i]==x)
{
f=1;
printf("\nelement found at position:%d",i+1);
}
}
if(f==0)
{
printf("\nelement not found");
}
getch();
}






