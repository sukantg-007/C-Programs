//find given number is pallindrom or not
#include <stdio.h>
int main()
{
	int x, rev=0, org;

	//take number from user

	printf("Enter number : ");
	scanf("%d",&x);

	//put it in org for future need
	org=x;

	//find reverse

	while(x>0)
	{
		rev=rev*10+x%10;
		x=x/10;
	}

	if(rev==org)
		printf("%d is Pallindrom Number",org);
	else
		printf("%d is not Pallindrom ",org);
}