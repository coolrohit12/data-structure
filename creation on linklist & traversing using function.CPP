#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct ll
{
int data;
struct ll *next;
}
*start=NULL;
void create()
{
char ch;
  do
  {
 struct ll *node,*temp;
 node=(struct ll*)malloc(sizeof(struct ll));
 printf("enter data to create list");
 scanf("%d",&node->data);
 node->next=NULL;
  if(start==NULL)
  {
  start=node;
  temp=node;
  }
  else
  {
  temp->next=node;
  temp=node;
  }
   printf("do you want to create another press y/n:\n");
  ch=getch();
 }
 while(ch!='n');
 }
 void show()
 {
 struct ll *node;
 node=start;
 while(node!=NULL)
 {
 printf("|%d|",node->data);
 node=node->next;
 }
 printf("|NULL|");
 }
void main()
{
create();
show();
getch();
}