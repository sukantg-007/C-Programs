//print tabular format data
#include<stdio.h>
int main()
{
    int i,j;
    int k='Z';
    for(i=1;i<=4;i++)//rows
    {
        for(j=1;j<=4;j++)//columns
        {
            if(j<=i)
            {
                printf("%c\t",k);
                k--;
            }
        }
        printf("\n");
    }
}
