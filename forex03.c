//print tabular format data
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)//rows
    {
        for(j=1;j<=4;j++)//columns
        {
            printf("%d\t",i*j);
        }
        printf("\n");
    }
}
