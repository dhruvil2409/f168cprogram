#include<stdio.h>
#include<conio.h>
void main()
{
int x,no;
clrscr();
	printf("enter any number for the table is :");
	scanf("%d",&no);
	for(x=1;x<=10;x++)
	{
	printf("\n%d * %d = %d",no,x,no*x);
	}
getch();
}