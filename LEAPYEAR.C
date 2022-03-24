#include<stdio.h>
#include<conio.h>
void main()
{

	int year;
	clrscr();
	printf("\nEnter The Year :");
	scanf("%d",&year);

	if (year%4==0  && (year%400==0 || year%1000!=0))
	{
		printf("\n %d is Leap Year");
	}
	else
	{
		printf("\n%d is Not Leap Year");
	}
	getch();
}

