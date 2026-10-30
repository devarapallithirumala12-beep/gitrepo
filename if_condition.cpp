#include<stdio.h>
int main()
{
	int a = 25;
	{
		if (a > 0)
			printf("%d is positive number", a);
	}

	{
		if (a < 0)
			printf("%d is negitive number", a);
	}
	{
		if (a == 0)
			printf("%d is equal to zero", a);

	}
	return 0;
		
}


