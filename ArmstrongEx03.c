//find given number is Armstrong or not
#include <stdio.h>
#include <math.h>
int main()
{
	int x, arm=0, org;

	//take number from user
	printf("Enter number : ");
	scanf("%d",&x);

	//put it in org
	org=x;

	//find armstrong
	while(x>0)
	{
		arm=arm+pow(x%10,3);
		x=x/10;
	}
	printf("%d\n",arm);
	if(arm==org)
		printf("%d is Armstrong Number",org);
	else
		printf("%d is not Armstrong Number",org);
}
