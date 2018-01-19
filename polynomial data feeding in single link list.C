#include<stdio.h>
#include<conio.h>
struct poli
{
int coff;
int expo;
struct poli *next;
}
*start=NULL;
void create()
{
char ch;
do
{
struct poli *node,*cur;
node=(struct poli*)malloc(sizeof(struct poli));
printf("enter cofficient:\n");
scanf("%d",&node->coff);
printf("enter exponent:\n");
scanf("%d",&node->expo);
if(start==NULL)
{
start=node;
cur=node;
}
else
{
cur->next=node;
cur=node;
}
printf("enter any key to add more data:\n");
ch=getch();
}
while(ch!='n');
}
void trav()
{
struct poli *node;
node=start;
while(node!=NULL)
{
printf("|%d|%d|-->",node->coff,node->expo);
node=node->next;
}
printf("NULL\n");
}
void main()
{
create();
trav();
getch();
}


