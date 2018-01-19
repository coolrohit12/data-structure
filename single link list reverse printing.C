#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct node
 {
 long int data;
    struct node *next;
  }
      *start=NULL;

  void create()
  {
  char ch;
  do
  {
  struct node *new_node,*current;
  new_node=(struct node*)malloc(sizeof(struct node));
  printf("enter data");
  scanf("%ld",&new_node->data);
  new_node->next=NULL;
  if(start==NULL)
  {
  start=new_node;
  current=new_node;
  }
  else
  {
  current->next=new_node;
  current=new_node;
  }
  printf("do you want to create another:\n");
  ch=getch();
  }
  while(ch!='n');
  }
 
  void reverse()
  {
  struct node *t=NULL,*t1=start,*t2=t1->next;
  while(t2!=NULL)
  {
  t1->next=t;
  t=t1;
  t1=t2;
  t2=t2->next;
  }
   t1->next=t;
  start=t1;
  }
  void display()
  {
  struct node *new_node;
  printf("the linked list:n");
  new_node=start;
  while(new_node!=NULL)
  {
  printf("|%ld|-->",new_node->data);
  new_node=new_node->next;
  }
  printf("|NULL|");
  }
  void main()
  {
  clrscr();
  create();
  reverse();
  display();
  getch();
  }
