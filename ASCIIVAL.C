#include<stdio.h>
#include<conio.h>
void main()
{
	char c;
	clrscr();
	printf("Enter The Character:");
	scanf("%c",&c);

	if ((c>=65 && c<=90) || (c>=97 && c<=122))
	{
		printf("\n Ascii Value Of %c is %d",c,c);
	}
	else
	{
		printf("\n %c Is Not An Alphabet",c);
	}

	getch();
}