#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,e;
clrscr();
printf("enter the value of a to check is'it max or not\n");
scanf("%d",&a);
printf("enter the value of b to check is'it max or not\n");
scanf("%d",&b);
printf("enter the value of c to check is'it max or not\n");
scanf("%d",&c);
printf("enter the value of d to check is'it max or not\n");
scanf("%d",&d);
printf("enter the value of e to check is'it max or not\n");
scanf("%d",&e);
 if(a>b && a>c && a>d && c>d && a>e)
 {
 printf(" maxm number%d",a);
 }
 else if (b>c && b>d && b>e)
 {
 printf("maxm number%d",b);
 }
 else if (c>d && c>e)
 {
 printf("maxm number %d",c);
 }
 else if (d>e)
 {
 printf("maxm number %d",d);
 }
 else
 {
 printf("maxm number%d",e);
 }
 getch();
 }