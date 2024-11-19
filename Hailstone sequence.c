#include <stdio.h>


int hailstone(int);

int hailstone(int n)
{
	int a;
	if(n>0 && n!=1)
	{
	
		if(n%2 == 0)
		{
			a=n/2;
			printf("%d\t", a);
		}
		else
		{
			a=(3*n)+1;
			printf("%d\t", a);
		}
		
		if(a!=1)
		{
			hailstone(a);
		}
	}
}


int main()
{
	int n;
	printf("Enter a positive integer: ");
	scanf("%d", &n);
	if(n>0)
	{
        printf("The Hailstone sequence is as follows: \n");
		printf("%d\t", n);
	}
	else
	{
		printf("Please enter a positive number.");
	}
	hailstone(n);
}
