#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("\nEnter The two Numbers :");
	scanf("%d %d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("\n After Swaping: A = %d , B = %d",a,b);
	getch();
}