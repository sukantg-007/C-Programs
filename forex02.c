//print even number from 1 to 100
#include<stdio.h>
int main()
{
    int i=2;
   printf("First approach:\n");
    for(;i<100;i=i+2)
    {
        printf("%d\t",i);
   
    }
    printf("i=%d",i);
    printf("\nSecond approach:\n");
    for(i=0;i<100;i++)
    {
        if(i%2==0)
            printf("%d\t",i);
   
    }
   
}
