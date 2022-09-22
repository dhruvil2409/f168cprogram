#include<stdio.h>
#include<conio.h>
void main()
{
int player;
clrscr();
printf("enter the number of player age is :\n");
scanf("%d",&player);
printf("enterned total number of player age  is :%d\n");
if(player>=18)
{
printf("your are selected for the team %d\n",player);
}
else
{
printf("your are  not selected for the team %d\n",player);
}
getch();
}
