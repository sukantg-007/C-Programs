//Menu driven program using do..while and switch
#include <stdio.h>
int main()
{
	int x,rev=0, isPositive, isEven;
	int choice;

	do{
		printf("Menu\n");
		printf("1. Find Even/Odd\n");
		printf("2. Find Positive/Not\n");
		printf("3. Find Reverse\n");
		printf("4. Exit\n");

		printf("Plese Enter Choice : ");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:	printf("\nEnter Number : ");scanf("%d",&x);
					isEven=(x%2==0)?1:0;
					if(isEven)
						printf("%d is Even\n",x);
					else
						printf("%d is Odd\n",x);
					break;
			case 2:	printf("\nEnter Number : ");scanf("%d",&x);
					isPositive=(x>0)?1:0;
					if(isPositive)
						printf("%d is Positive\n",x);
					else
						printf("%d is Negative\n",x);
					break;
			case 3: printf("\nEnter Number : ");scanf("%d",&x);
					
					while(x>0)
					{
						rev=rev*10+x%10;
						x=x/10;
					}
					printf("\nReverse is : %d\n",rev);
					break;
			case 4: printf("\nGoodbye....\n");
					break;
			default: printf("Please Enter Rigt Choice (1-4)\n");
					break;
		}
	}while(choice !=4);
}
