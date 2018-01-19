#include<stdio.h>
#include<conio.h>
void ut()
{
int i,j,a[3][3];
printf("enter value in the array");
for(i=0;i<3;i++)
for(j=0;j<3;j++)
scanf("%d",&a[i][j]);
printf("upper triangular matrix is\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
if(j>=i)
printf("%d\t",a[i][j]);
else
{
a[i][j]=0;
printf("%d\t",a[i][j]);
}
}
printf("\n");
}
}
void main()
{
ut();
getch();
}