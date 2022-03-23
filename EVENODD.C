#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	clrscr();
	printf("\nEnter the Number:");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("\nNumber is Even");
	}
	else
	{
		printf("\nNumber is Odd");
	}
	getch();
}