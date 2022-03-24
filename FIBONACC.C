#include<stdio.h>
#include<conio.h>
void main()
{
	int a=0,b=1,c,i,lev;
	clrscr();
	printf("\nEnter The Level Number :");
	scanf("%d",&lev);
	printf("\n%d\n%d",a,b);

	for (i=1;i<=lev;i++)
	{
		c=a+b;
		printf("\n%d",c);
		a=b;
		b=c;
	}
	getch();
}


