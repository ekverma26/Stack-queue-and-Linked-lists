#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<stdlib.h>
# define NULL 0
void inla();
void inbeg();
void inbet();
void display();
void input();
void dela();
void debeg();
void debet();
void count();
void search();
void hmax();

void secmax();
void reverse();
void sort();
int co=0;
struct node
{
int data;
struct node *pre;
struct node *next;
}*start,*tmp2,*newnode,*tmp,*t;
void main()
{
clrscr();
int n,c;
start=NULL;
while(1)
{
clrscr();
printf("1.Insert Last\n2.Insert Beginning\n3.Insert Between\n4.Delete Last\n5.Delete Beginning\n6.Delete Between\n7.Count Linked list\n8.Highest Number\n9.Second Highest\n10.Search\n11.Print in Reverse Direction\n12.Sorting\n13.Display\n14.Exit\n");
printf("enter you choice:");
scanf("%d",&c);
switch(c)
{
case 1:	inla();
	getch();
	break;

case 2: inbeg();
	getch();
	break;
case 3: inbet();
	getch();
	break;
case 4: dela();
	getch();
	break;
case 5: debeg();
	getch();
	break;
case 6: debet();
	getch();
	break;
case 7: count();
	getch();
	break;
case 8: hmax();
	getch();
	break;
case 9: secmax();
	getch();
	break;
case 10:search();
	getch();
	break;

case 11:reverse();
	getch();
	break;
case 12:sort();
	getch();
	break;
case 13:display();
	getch();
	break;
case 14:exit(0);
}
}
}
void input()
{
co++;
newnode=(struct node*)malloc(sizeof(struct node ));
newnode->pre=NULL;
newnode->next=NULL;
printf("enter newnode:- ");
scanf("%d",&newnode->data);
}
void inla()
{
input();
if(start==NULL)
start=newnode;

else
{
tmp=start;
while(tmp->next!=NULL)
{
tmp=tmp->next;
}
newnode->pre=tmp;
tmp->next=newnode;
}
display();
}
void inbeg()
{
input();
if(start==NULL)
start=newnode;
else
{
tmp=start;
start=newnode;
newnode->next=tmp;
tmp->pre=newnode;
}
display();
}
void inbet()

{
int value;
input();
printf("\nenter the value after which value is to be inserted:");
scanf("%d",&value);
tmp=start;
while(tmp->data!=value &&tmp!=NULL)
{
tmp=tmp->next;
}
tmp2=tmp->next;
if(tmp->data==value)
{
newnode->pre=tmp;
newnode->next=tmp->next;
tmp->next=newnode;
tmp2->pre=newnode;
}
display();
}
void dela()
{
co--;
tmp=start;
while(tmp->next!=NULL)
{
tmp=tmp->next;

}
t=tmp->pre;
t->next=NULL;
free(tmp);
display();
}
void debeg()
{
co--;
tmp=start;
tmp2=tmp->next;
start=tmp->next;
tmp2->pre=NULL;
free(tmp);
display();
}
void debet()
{
co--;
int key;
printf("enter the value to be deleted:");
scanf("%d",&key);
tmp=start;
while(tmp->data!=key &&tmp!=NULL)
{
tmp=tmp->next;
}

tmp2=tmp->next;
t=tmp->pre;
if(tmp->data==key)
{
t->next=tmp->next;
tmp2->pre=tmp->pre;
free(tmp);
}
else
printf("\nvalue does not exist in the linklist.");
display();
}
void count()
{
printf("the total number of nodes in linked list:%d",co);
}
void hmax()
{
int max;
tmp=start;
max=-32768;
while(tmp!=NULL)
{
if(max<tmp->data)
{
max=tmp->data;
tmp=tmp->next;

}
else
tmp=tmp->next;
}
printf("the highest value:%d",max);
}
void secmax()
{
int max,secmax;
tmp=start;
max=-32768;
secmax=-32767;
while(tmp!=NULL)
{
if(max<tmp->data)
{
secmax=max;
max=tmp->data;
tmp=tmp->next;
}
else if(secmax<tmp->data && max>tmp->data)
{
secmax=tmp->data;
tmp=tmp->next;
}
else
tmp=tmp->next;

}
printf("the second highest value:%d",secmax);
}
void search()
{
int i=0,n;
printf("enter the number to be searched:");
scanf("%d",&n);
tmp=start;
while(tmp->data!=n &&tmp!=NULL)
{
i++;
tmp=tmp->next;
}
if(tmp->data==n)
printf("number found at,%d position",i+1);
else
printf("number does not exist in the linked list.");
}
void reverse()
{
tmp=start;
while(tmp->next!=NULL)
{
tmp=tmp->next;
}
while(tmp!=NULL)

{
printf("\ndata=%d",tmp->data);
tmp=tmp->pre;
}
}
void sort()
{
int s;
tmp=start;
while(tmp!=NULL)
{
 tmp2=tmp->next;
while(tmp2!=NULL)
 {
if(tmp2->data<tmp->data)
 {
 s=tmp->data;
tmp->data=tmp2->data;
 tmp2->data=s;
tmp=tmp->next;
 }
else
 tmp2=tmp2->next;
 }
tmp=tmp->next;
 }
display();

 }
void display()
{
printf("\nthelinklist is:");
tmp=start;
while(tmp!=NULL)
{
printf("\ndata=%d",tmp->data);
tmp=tmp->next;
}
}
