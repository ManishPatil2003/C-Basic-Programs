#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,flag=1;
	clrscr();
	printf("\nEnter The NUmber TO Check Prime Number :");
	scanf("%d",&n);

	for(i=2;i<=n-1;i++)
	{
		if(n%i==0)
		{
			flag=0;
			break;
		}
	}
	if (flag==1)
	{
		printf("\n%d Is Prime Number ",n);
	}
	else
	{
		printf("\n%d Is Not Prime  Number ",n);
	}
	getch();
}
