#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a=0,b=0;
	clrscr();
	for(i=1;i<=20;i++)
	{
		if(i%2==0)
		{
			printf("%d",i);
			a=a+i;
		}
		else
		{
			printf("\n%d\t",i);
			b=b+i;

		}
	}
	printf("\n\nSum Of Even Number=%d",a);
	printf("\n\nSum Of Odd Number=%d",b);

	getch();
}
