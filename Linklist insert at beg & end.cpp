#include<stdio.h>
#include<conio.h>
struct ll
{
int data;
struct ll *next;
};
struct ll *head=NULL,*node,*temp,*node1,*loc;
char ch;
void main()
{
do
{
node=(struct ll*)malloc(sizeof(struct ll));
printf("enter data");
scanf("%d",&node->data);
node->next=NULL;
if(head==NULL)
{
head=node;
temp=node;
}
else
{
temp->next=node;
temp=node;
}
printf("if you want to try again press any key if not press n:\n");
scanf("%c",&ch);
ch=getch();
}
while(ch!='n');
node=(struct ll*)malloc(sizeof(struct ll));
printf("enter data to insert at beg");
scanf("%d",&node->data);
node->next=head;
head=node;
node1=(struct ll*)malloc(sizeof(struct ll));
printf("enter data to insert at the end:\n");
scanf("%d",&node1->data);
node1->next=NULL;
loc=head;
while(loc->next!=NULL)
{
loc=loc->next;
}
loc->next=node1;
node=head;
while(node!=NULL)
{
printf("|%d|-->",node->data);
node=node->next;
}
printf("|NULL|");
getch();
}
