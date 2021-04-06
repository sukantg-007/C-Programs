//find square of numbers from 1 to 10 and also addition
#include<stdio.h>
#include<math.h>
int main()
{
    int i=1;
    int sum=0;
    for(;i<11;i++)
    {
        printf("%d\n",(int)pow(i,2));
        sum=sum+pow(i,2);
    }
    printf("sum of squares : %d",sum);
}
/*
 * edantapc02@vedantapc02-VirtualBox:~/Desktop/Notes/C-prog$ gcc forex01.c -lm
vedantapc02@vedantapc02-VirtualBox:~/Desktop/Notes/C-prog$ ./a.out 
1
4
9
16
25
36
49
64
81
100
sum of squares : 385
*/
