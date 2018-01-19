#include<stdio.h>
#include<conio.h>

void insert(data,max,pos)
{
 int i,j,a[20],n;
 printf("enter the range of the array");
 scanf("%d",&n);
 if(max>=n)
 {
 printf("enter the value in the array");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);

 for(i=n;i>=0;--i)
 {
 a[i]=a[i-1];
 if(i==pos)
 {
 a[i]=data;
 break;
 }
 }

 printf("data inserted at the end of list\n");
 for(i=0;i<n+1;i++)
 printf("%d  ",a[i]);
 }
 else
 printf("sorry size of the array is less than your choice \n please try again");
 }

 void main()
 {
 int data,max=20,pos;
 clrscr();
 printf("enter data to insert and position where to insert");
  scanf("%d%d",&data,&pos);
  pos=pos-1;
 insert(data,max,pos);
 getch();
 }