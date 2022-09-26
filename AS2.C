#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,max;
clrscr();
	printf("enter the value of a :\n",a);
	scanf("%d",&a);
	printf("enter the value of b :\n",b);
	scanf("%d",&b);
	printf("enter the value of c :\n",c);
	scanf("%d",&c);
	printf("enter the value of d :\n",d);
	scanf("%d",&d);
		if(a>b)
		{
		  if(a>c)
		   {
		     if(a>d)
		      {
		     printf("%d a is max",a);
		      }
		      else
		       {
		      printf("%d d is max",d);
		       }
		}
		else
		{

			if(c>d)
		  {
		  printf("%d c is max",c);
		  }
		    else
		  {
		   printf("%d d is max",d);
		  }
	     }
	}
	    else
	     {
		if(b>c)
		{
		  if(b>d)
			 {
			 printf("%d b is max",b);
			 }
			 else
			 {
			 printf("%d d is max",d);
			 }
		  }
		  else
		  {
			if(c>d)
			{
			printf("%d c is max",c);
			}
			else
			{
			printf("%d d is max",d);
			}
		     }
		 }







getch();
}
