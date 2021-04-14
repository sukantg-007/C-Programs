#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[3];	
	int i;

	ptr=a;
	printf("Enter 3 numbers: \n");
	for (i=0;i<3;i++)
	{
		scanf("%d",&a[i]);
	}

	printf("Give numbers: \n");
	for (i=0;i<3;i++)
	{
		printf("%d\t",a[i]);
	}

	//dynamic memory allocation for static array
	a=(int*)realloc(a,sizeof(int)*5);
	a[3]=11;
	a[4]=11;

	printf("New Array numbers: \n");
	for (i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
	
}