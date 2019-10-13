#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<stdlib.h>
# define null 0

void reverse(struct node *tmp);
void sort();

struct node
{
int data;
struct node *link;
}*start,*tmp,*new_node,*tmp2;


void main()
{clrscr();
int n,ch;
printf("\n Enter number of nodes:");
scanf("%d",&n);


while(n>0)
{
new_node=(struct node*)malloc(sizeof(start));
new_node->link=null;
printf("\n Node:");
scanf("%d",&new_node->data);

if(start==null)
start=new_node;
else
{
tmp=start;
while(tmp->link!=null)
{
tmp=tmp->link;
}
tmp->link=new_node;
}
n--;
}
printf("\n Existing list is:\n");
tmp=start;
while(tmp!=null)
{
printf("%d\n",tmp->data);
tmp=tmp->link;
}

printf("\n 1-reverse the linked list\n 2-Sortin in linked list\n 3-Exit\n");
printf("\n Enter your choic;");
scanf("%d",&ch);

switch(ch)
{
case 1:reverse(start);
break;

case 2:sort();
break;

case 3:exit(0);
default:printf("\n Enter a valid choice.");
}
getch();
}


void reverse(struct node *tmp)
{
if(tmp==null)
return;
reverse(tmp->link);
printf("\t%d",tmp->data);
}

void sort()
{
int c;
for(tmp=start;tmp->link!=null;tmp=tmp->link)
{
for(tmp2=tmp->link;tmp2!=null;tmp2=tmp2->link)
{
if(tmp->data>tmp2->data)
{
c=tmp->data;
tmp->data=tmp2->data;
tmp2->data=c;
}
}
}
printf("\n Sorted Linked List is:");
tmp=start;
while(tmp!=null)
{
printf("\t%d",tmp->data);
tmp=tmp->link;
}
}
