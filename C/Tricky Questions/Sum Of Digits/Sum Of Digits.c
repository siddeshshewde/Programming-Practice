#include <stdio.h>

int main()
{
	int n, i, sum = 0;
	printf("Enter a Number : ");
	scanf("%d",&n);
	
	while (n > 9)
	{
		i = 0;
		while (n != 0)
		{	
			i = n % 10;
			n = n / 10;
			sum = sum + i;
		}
		n = sum;
		sum = 0;
	}
	printf("%d", n);
}
