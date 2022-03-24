#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("\nEnter the Number :");
	scanf("%d",&a);

	if (a>0)
	{
		printf("\n%d Is The number is Positive",a);
	}
	else
	{
		printf("\n%d Is The Number is Negative ",a);
	}
	getch();
}