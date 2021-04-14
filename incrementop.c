#include <stdio.h>
#include <conio.h>
void main()
{
	int a=10,b=20;
	clrscr();
	printf("Logical AND and Bitwise AND operator");
	if(a++!=0 && b++!=20){
		
	}
	printf("a : %d....b : %d",a,b);

	a=10, b=20;
	if(a++!=0 & b++!=20){
		
	}
	printf("a : %d....b : %d",a,b);

	printf("Logical OR and Bitwise OR operator");
	if(a++==0 || b++==20){
		printf("a : %d....b : %d",a,b);
	}
	

	a=10, b=20;
	if(a++!=0 | b++!=20){

		printf("a : %d....b : %d",a,b);
	
	}
	

}
