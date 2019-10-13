#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int queue[20],i,front=0,rear=0,max,item;
void insert();
void deletion();
void display();
	
void main()
{
int i,ch;
clrscr();
printf("\nenter max capacity of queue:");
scanf("%d",&max);
printf("\nqueue is:");
for(i=1;i<=max;i++)
{
queue[i]=-1;
printf("\t%d",queue[i]);
}
while(1)
{
printf("\n");
printf("\n1 insertion\n2 deletion\n3 display\n4 exit");
printf("\nenter your choice:");
scanf("%d",&ch);

switch(ch)
{
case 1: insert();
	break;
case 2: deletion();
	break;
case 3: display();
	break;
case 4: exit(0);
	break;
default:printf("\nInvalid choice");
}
}
}

void display()
{
printf("\nqueue is:");
for(i=1;i<=max;i++)
{
printf("\t%d",queue[i]);
}
}

void insert()
{
printf("\nentera item to insert:");
scanf("%d",&item);
if((front==1 && rear==max)||(front==rear+1))
{
printf("Overflow!");
}

if(front==0)
{
front=rear=1;
printf("\nitem inserted sucessfully.");
}
else if(rear==max)
{
rear=1;
printf("\nitem inserted sucessfully.");
}
else
{
rear=rear+1;
printf("\nitem inserted sucessfully.");
}
queue[rear]=item;

}

void deletion()
{
if(front==0)
{
printf("\nunderflow!");
return;
}
queue[front]=-1;

if(front==rear)
{
front=0;
rear=0;
}

else if(front==max)
{
front=1;
}
else
{
front=front+1;
}
printf("\nitem deleted sucessfully.");
}
