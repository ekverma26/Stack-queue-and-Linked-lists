#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void push(int [],int);
void pop(int []);
int stack[10],item,top=0,max=5,n,i,p;
void main()	
{
clrscr();
int ch;
while(1)
{

printf("\n\n 1-Push\n 2-pop\n 3-Exit\n");
printf("\nEnter a choice:");
scanf("%d",&ch);
switch(ch)
{
case 1 : printf("\nEnter an no. which you want to push:");
	scanf("%d",&item);
	push(stack,item);
	printf("\n Stack:");
	for(i=top;i>=1;i--)
	printf("\n%d",stack[i]);
	break;
case 2: pop(stack);
	break;
case 3: exit(0);
default:printf("\nPlease enter a valid choice.");
}
}
}
void push(int stack[],int item)
{
if(top<max)
{
top=top+1;
stack[top]=item;
}
else
{
printf("\nOverflow");
}
}
void pop(int stack[])
{
if(top>0)
   {	item=stack[top];
	top=top-1;
	printf("\n Pop element:%d",item);
	printf("\n Stack:");
	for(i=top;i>=1;i--)
	printf("\n%d",stack[i]);

   }
else
   printf("Underflow");

}
