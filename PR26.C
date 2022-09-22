#include<stdio.h>
#include<conio.h>
void main()
{
char a;
clrscr();
       printf("enter the character ");
       scanf("%c",&a);
       printf("enterned character is : %c\n",a);
	switch(a)
{
	case 'j':
		printf("january");
		break;
	case 'f':
		printf("february");
		break;
	case 'm':
		printf("march");
		break;
	case 'a':
		printf("april");
		break;
	case 'u':
		printf("may");
		break;
	case 'x':
		printf("june");
		break;
	case 'w':
		printf("july");
		break;
	case 'h':
		printf("august");
		break;
	case 'r':
		printf("september");
		break;
	case 't':
		printf("october");
		break;
	case 'n':
		printf("noverber");
		break;
	case 'd':
		printf("december");
		break;


}
getch();
}