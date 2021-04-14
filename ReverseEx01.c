//Find reverse of number
#include<stdio.h>

int main()
{
	int x, rev=0;

	//take i/p from user
	printf("Enter number : ");
	scanf("%d",&x);

	//find reverse using while loop

	while (x>0)
	{
		rev=rev*10+x%10;
		x=x/10;
	}

	//print reverse

	printf("\nReverse is : %d",rev);
}