#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int maxsize = 10;
int top = -1;
int stack [10];


void main(void)
{
	int n = 0;
	while (1)
	{
		printf("Choose an Option : \n");
		printf("1. Add an Element. (Push)\n");
		printf("2. Delete an Element.(Pop)\n");
		printf("3. Display all the Elements. (Display)\n");
		printf("4. Check if Stack is full. (isFull)\n");
		printf("5. Check if Stack is empty.(isEmpty)\n");
		printf("6. Exit\n");
		
		scanf("%d",&n);
		
		switch(n)
		{
			case 1 : Push(); 
				break;
			case 2 : Pop(); 
				break;
			case 3 : Display(); 
				break;
			case 4 : isFull(); 
				break;
			case 5 : isEmpty(); 
				break;
			case 6 : exit(0); 
				break;
			Default : printf("Invalid Option. Please select a valid option.\n"); 
								
		}
	}
}

Push()
{
	int data;
	if (top == maxsize)
	{
		printf("Stack is Full.\n");
	}	
	else
	{
		printf("Enter the element to add.\n");
		scanf("%i",&data);
		stack[++top] = data;
		printf("%i has been added.\n",data);
	}
}

Pop()
{
	int data;
	if (top == -1)
		printf("Stack is Empty\n");
	else
	{
		data = stack[top];
		--top;
		printf("%i deleted from the stack.\n",data);
	}
}

Display()
{
	if (top == -1)
	{	
		printf("Stack is Empty\n");
		return 0;
	}
	int i = 0;
	printf("Elements present in the stack are : \n");
	for (; i < top ; i++)
	{
		printf("%i\n",stack[i]);
	}
}

isFull()
{
	if (top == maxsize)
	{
		printf("Stack is full\n");
		return 0;
	}
	printf("Stack is not full.\n");
}

isEmpty()
{
	if (top == -1)
	{
		printf("Stack is empty\n");
		return 0;
	}
	printf("Stack is not empty.\n");
	
}

