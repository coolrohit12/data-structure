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
printf("enter data\n");
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
void delete_beg()
{
if(start->next==start)
{
printf("sorry \n");
printf("you can not delete data because there is only one node:\n");
}
else
{
struct cirll *del;
del=start;
start=start->next;
temp->next=start;
free(del);
}
}
void delete_end()
{
struct cirll *prelast,*store;
prelast=start;
while(prelast->next!=start)
{
store=prelast;
prelast=prelast->next;
}
store->next=prelast->next;
temp=store;

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
printf("|NULL|\n");
}

void main()
{

int choice;
char ch;
create();
traverse();
do
{

printf("enter 1 to delete data from begning\n");
printf("enter 2 to delete data from end\n");
printf("enter 3 to exit");
scanf("%d",&choice);
switch(choice)
{
case 1:
delete_beg();
break;
case 2:
delete_end();
break;
case 3:
exit();
default:
printf("you have enter wrong key");
}
traverse();
printf("if you want to try again press y/n:\n");
fflush(stdin);
scanf("%c",&ch);
}
while(ch!='n');
traverse();
getch();
}

