#include<stdio.h>
#include<conio.h>
void main()
{
int x;
clrscr();
	printf("enter the any number ");
	scanf("%d",&x);
	printf("enterned the number is :%d\n",x);
	(x%2==0)?printf("enter the even number is :%d\n",x):
	printf("enter the odd number is :%d\n",x);

getch();
}