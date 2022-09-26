#include<stdio.h>
#include<conio.h>
void main()
{
int x=1,y;
clrscr();
	printf("enterned any value of y: ");
	scanf("%d",&y);
	while(x<=y)
	{
	printf("\n %d",y);
	y--;
	}
getch();
}