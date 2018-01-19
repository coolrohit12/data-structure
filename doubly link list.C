//WAP IN C TO CREATE DOUBLY LINKLIST AND INSERT NODE AT BEG & END & traverse//
#include<stdio.h>
#include<conio.h>
struct cirll
{
int data;
struct cirll *next;
struct cirll *prev;
};
struct cirll *start=NULL,*temp;
char ch;
void create()
{
do
{
struct cirll *node;
node=(struct cirll*)malloc(sizeof(struct cirll));
printf("enter data\n");
scanf("%d",&node->data);
node->prev=NULL;
node->next=NULL;
if(start==NULL)
{
start=node;
temp=node;
}
else
{
temp->next=node;
node->prev=temp;
temp=node;
}
printf("enter any key to add more nodes else press 'n':\n");
ch=getch();
}
while(ch!='n');
}
void insert_beg()
{
struct cirll *node;
node=(struct cirll*)malloc(sizeof(struct cirll));
printf("enter data to insert at the begining:\n");
scanf("%d",&node->data);
node->next=start;
node->prev=NULL;
start=node;
}

void trav_forward()
{
struct cirll *trav;
trav=start;
while(trav!=NULL)
{
printf("%d--->",trav->data);
trav=trav->next;
}
//printf("|%d|--->",trav->data);
printf("|NULL|\n");
}
void trav_backward()
{
while(temp!=start)
{
printf("|%d|--->",temp->data);
temp=temp->prev;
}
printf("|%d|--->",temp->data);
printf("|NULL|\n");
}
void insert_end()
{
struct cirll *node;
node=(struct cirll*)malloc(sizeof(struct cirll));
printf("enter data to insert at the end\n");
scanf("%d",&node->data);
node->next=NULL;
node->prev=temp;
temp->next=node;
temp=node;
}
void main()
{
int choice;
char ch;
do
{
printf("enter 1 to create a doubly list\n");
printf("enter 2 to insert data at the begning of list\n");
printf("enter 3 to insert data at the end of list\n");
printf("enter 4 to traverse list in forward direction\n");
printf("enter 5 to traverse list in backward directrion\n");
printf("enter 6 to exit");
scanf("%d",&choice);
switch(choice)
{
case 1:
create();
break;
case 2:
insert_beg();
break;
case 3:
insert_end();
break;
case 4:
trav_forward();
break;
case 5:
trav_backward();
break;
case 6:
exit();
break;
default:
printf("you have enter wrong key\n");
printf("please try again\n");
break;
}
printf("if you want to try again press y/n:\n");
fflush(stdin);
scanf("%c",&ch);
}
while(ch!='n');
getch();
}

