#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],b[10],c[10],i,j,m,n,k;
clrscr();
printf("enter the limit of the first array: ");
scanf("%d",&n);
printf("enter the sorted elements of the first array: ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter the limit of the second array: ");
scanf("%d",&m);
printf("enter the sorted elements of the second array: ");
for(j=0;j<m;j++)
scanf("%d",&b[j]);
i=0,j=0,k=0;
while(i<n&&j<m)
{
  if(a[i]<b[j])
  {
    c[k]=a[i];
    i++;
    k++;
  }
  else
  {
   c[k]=b[j];
   j++;
   k++;
  }
  }
  if(i<n)
  {
  c[k]=a[i];
  i++;
  k++;
  }
  else if(j<m)
  {
  c[k]=b[j];
  k++;
  j++;
  }
  printf("merged array is: ");
  for(i=0;i<m+n;i++)
  printf("%d\t",c[i]);
  getch();
  }
