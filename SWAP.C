#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("\nEnter The two Numbers :");
	scanf("%d %d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n After Swaping: A = %d , B = %d",a,b);
	getch();
}