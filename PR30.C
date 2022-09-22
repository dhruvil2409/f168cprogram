#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,max;
clrscr();
printf("enter the value of a to check is'it max or not\n");
scanf("%d",&a);
printf("enter the value of b to check is'it max or not\n");
scanf("%d",&b);
printf("enter the value of c to check is'it max or not\n");
scanf("%d",&c);
if (a>b)
{
if(a>c)
{
max=a;
}
else
{
   max=c;
  }
}
else
{
 if (b>c)
 {
 max=b;
 }
 else

  {
   max=c;
  }
}
printf("%d is maximum",max);
getch();
}