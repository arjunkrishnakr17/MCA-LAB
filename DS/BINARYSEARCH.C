#include<stdio.h>
#include<conio.h>
void main()
{
int c[10],a[10],i=0,n,x,t,j=0,mid,count=0,temp;
clrscr();
printf("\nenter the size of array: ");
scanf("%d",&n);
printf("\nenter the elements: ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(a[j+1]<a[j])
{
t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}
}
}
printf("\nsorted array is: ");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
printf("\nenter the element to be searched: ");
scanf("%d",&x);
mid=n/2;
while(!count)
{
if(x==a[mid])
{
temp=mid;
count=1;
}
else if(x>a[mid] && x<=a[n-1])
{
mid=mid+(mid/2);
}

else if(x<a[mid] && x>=a[0])
{
mid=mid/2;
}

else
{
break;
}
}
if(count==0)
{
printf("\nelement not found");
}
else
{
printf("\nelememt found at:%d",temp+1);
}
getch();
}
