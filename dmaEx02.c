#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *ptr;
	int i;

	//dynamic memory allocation and creation of array having size 3

	ptr=(int*)malloc(sizeof(int)*3);

	printf("Enter 3 numbers: \n");
	for (i=0;i<3;i++)
	{
		scanf("%d",(ptr+i));
	}

	printf("Give numbers: \n");
	for (i=0;i<3;i++)
	{
		printf("%d\t",*(ptr+i));
	}

	//dynamic memory reallocation for dynamic array

	ptr=(int*)realloc(ptr,sizeof(int)*5);
	*(ptr+3)=11;
	*(ptr+4)=11;


	printf("New Array numbers: \n");
	for (i=0;i<5;i++)
	{
		printf("%d\t",*(ptr+i));
	}
	
	free(ptr);
}