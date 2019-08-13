#include<stdio.h>

void main()
{
	int n, i, j;
	printf("Enter a number : ");
	scanf("%i",&n);
	int a[n];
	
	//Storing the numbers in an array
	printf("Enter the numbers for Sorting\n");
	for (i = 0 ; i < n ; i++)
	{
		scanf("%d",&a[i]);
	}
	
	//For loop for iterating through the numbers in array
	for (i = 0 ; i < n-1 ; i++)
	{
		for (j = 0 ; j < n-i-1 ; j++)
		{
			//Swap
			if (a[j] > a[j+1])
			{
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	
	for (i = 0 ; i < n ; i++)
	{
		printf("%d ",a[i]);
	}
}
