#include<stdio.h>
#include<conio.h>
void main()
{
int a=35,b;
clrscr();
a+=2;
printf("print number is :%d\n",a);
a-=3;
printf("print number is :%d\n",a);
a*=5;
printf("print number is :%d\n",a);
a/=2;
printf("print number is :%d\n",a);
a%=3;
printf("print number is :%d\n",a);
b&=a;
printf("print number is :%d\n",b);
a^=5;
printf("print number is :%d\n",a);
a|=3;
printf("print number is :%d\n",a);
getch();
}