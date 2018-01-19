#include<stdio.h>
#include<conio.h>
struct cirll
{
int data;
struct cirll *next;
};
struct cirll *start=NULL,*temp;
char ch;
void create()
{
do
{
struct cirll *node;
node=(struct cirll*)malloc(sizeof(struct cirll));
printf("enter data");
scanf("%d",&node->data);
if(start==NULL)
{
start=node;
temp=node;
temp->next=start;
}
else
{
temp->next=node;
temp=node;
temp->next=start;
}
printf("enter any key to add more nodes else press 'n':\n");
ch=getch();
}
while(ch!='n');
}
void insert_beg()
{

struct cirll *node,*last;
node=(struct cirll*)malloc(sizeof(struct cirll));
printf("enter data to insert at the begning");
scanf("%d",&node->data);
node->next=start;
start=node;
temp->next=start;
}

void traverse()
{
struct cirll *trav;
trav=start;
while(trav->next!=start)
{
printf("|%d|--->",trav->data);
trav=trav->next;
}
printf("|%d|--->",trav->data);
printf("|NULL|");
}
void insert_end()
{
struct cirll *node;
node=(struct cirll*)malloc(sizeof(struct cirll));
printf("enter data to insert at the end:\n");
scanf("%d",&node->data);
node->next=start;
temp->next=node;
}
void main()
{
create();
insert_beg();
insert_end();
traverse();
getch();
}

