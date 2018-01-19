#include<stdio.h>
#include<conio.h>
struct cdll
{
int data;
struct cdll *next,*prev;
};
struct cdll *start=NULL,*last;
char ch;
void create()
{
do
{
struct cdll *node,*temp;

node=(struct cdll*)malloc(sizeof(struct cdll));
printf("enter data to create list:\n");
scanf("%d",&node->data);
if(start==NULL)
{
start=node;
temp=node;
temp->next=start;
start->prev=temp;
last=temp;
}
else
{
temp->next=node;
node->prev=temp;
node->next=start;
start->prev=node;
temp=node;
last=temp;
}
printf("enter any key to add more else press 'n'\n");
ch=getch();
}
while(ch!='n');
}
void trav_farward()
{
struct cdll *trav;
trav=start;
printf("value in the circular doubly link list in farward traversing is:\n");
while(trav->next!=start)
{
printf("|%d|-->",trav->data);
trav=trav->next;
}
printf("|%d|",trav->data);
}
void trav_backward()
{
struct cdll *trav;
trav=last;
printf("\nvalue in circular doubly link list in backward traversing is:\n");
while(trav->prev!=last)
{
printf("|%d|-->",trav->data);
trav=trav->prev;
}
printf("%d",trav->data);
}
void insert_beg()
{
struct cdll *node;
node=(struct cdll*)malloc(sizeof(struct cdll));
printf("\n enter data to insert at begning:\n");
scanf("%d",&node->data);
node->next=start;
start->prev=node;
start=node;
last->next=start;
start->prev=last;
}
void insert_end()
{
struct cdll * node;
node=(struct cdll*)malloc(sizeof(struct cdll));
printf("\nenter data to insert at the end:\n");
scanf("%d",&node->data);
last->next=node;
node->prev=last;
node->next=start;
start->prev=node;
last=node;
}
void insert_pos()
{
struct cdll *node,*check,*temp;
int key;
node=(struct cdll*)malloc(sizeof(struct cdll));
printf("enter data to insert node at data pos:\n");
scanf("%d",&key);
printf("enter data in the node:\n") ;
scanf("%d",&node->data);
check=start;
while(check->data!=key)
{
temp=check;
check=check->next;
}
temp->next=node;
node->prev=temp;
node->next=check;
check->prev=node;
}
void main()
{
clrscr();
create();
insert_pos();
insert_beg();
insert_end();
trav_farward();
trav_backward();
getch();
}
