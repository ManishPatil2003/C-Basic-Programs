#include<stdio.h>
#include<conio.h>
void main()
{

	int a,b,total;
	char ch;
	clrscr();
	printf("\n + : Addition ");
	printf("\n - :subtraction ");
	printf("\n * :multiplication ");
	printf("\n / :division ");
	printf("\n Enter :");
	scanf("%c",&ch);
	printf("\nEnter The First Number :");
	scanf("%d",&a);
	printf("\nEnter The Second Number :");
	scanf("%d",&b);


	switch (ch)
	{
		case '+':
			total=a+b;
			printf("\nAddition :%d ",total);
		break;

		case '-':
			total=a-b;
			printf("\nSubtraction :%d",total);
		break;

		case '*':
			total=a*b;
			printf("\nMultiplication :%d",total);
		break;

		case '/':
			total=a/b;
			printf("\nDivision :%d",total);
		break;

		default:
			printf("\n Incorrect ");
		break;

	}
	getch();
}


