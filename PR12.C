#include<stdio.h>
#include<conio.h>
void main()
{
int t,r,sum,avg;
clrscr();
printf("enter your number is :");
scanf("%d",&t);
printf("you have enter number is : %d\n",t);
printf("enter your number is :");
scanf("%d",&r);
printf("you have enter number is : %d\n",r);
sum=t+r;
printf("addition of t and r %d+%d=%d\n",t,r,sum);
avg=(t+r)/2;
printf("avrage of t and r is (%d+%d)/2=%d\n ",t,r,avg);
getch();
}
