#include<stdio.h>
#include<conio.h>
void main()
{
 int a[100],n,i,item,loc=-1;
 clrscr();
 printf("\nenter the number of element :");
 scanf("%d",&n);
 printf("enter the element:\n");
 for(i=0;i<=n-1;i++)
 {
   scanf("%d",&a[i]);
 }
   printf("enter the number to be searche\n");
   scanf("%d",&item);
   for(i=0;i<=n;i++)
   {
     if(item==a[i])
      {
	loc=i;
	break;
      }
   }
     if(loc>=0)
     printf("\n%d is found in position %d",item,loc+1);
     else
     printf("\nitem does not exist");
     getch();
 }