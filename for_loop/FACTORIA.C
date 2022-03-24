#include<stdio.h>
#include<conio.h>
void main()
{
	long a,f=1,n;
	clrscr();
	printf("\nEnter The Number To Calculate Factorial :");
	scanf("%ld",&n);
	for(a=1;a<=n;a++)
	{
		 f=f*a;
		 printf("\nThe Factorial Of %ld Is :%ld",a,f);
	}
	getch();
}