#include <stdio.h>




void printName (char *name, int count)
{
	printf("%d %s\n",count+1,name);
	count++;
	
	if (count < 10)
		printName(name, count);
}

int main()
{
	char name[50];
	printf("Enter a Text : ");
	scanf("%s",&name);
	
	printName (name, 0);
}

