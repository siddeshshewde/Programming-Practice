#include <stdio.h>

int main()
{
	int n, i, j, smallest, index, temp;
	printf("Enter a number : ");
	scanf("%i",&n);
	int a[n];
	
	//Storing the numbers in an array
	printf("Enter the numbers for Sorting\n");
	for (i = 0 ; i < n ; i++)
	{
		scanf("%d",&a[i]);
	}
	
	for (i = 0 ; i < n-1 ; i++)
	{
		smallest = a[i];
		index = i;
		for (j = i+1 ; j < n ; j++)
		{
			if (a[j]< smallest)
			{
				smallest = a[j];
				index = j;
			}
		}
		a[index] = a[i];
		a[i] = smallest;
	}
	
	for (i = 0 ; i < n ; i++)
	{
		printf("%d",a[i]);
	}
	
}
