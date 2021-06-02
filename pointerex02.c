//print array using pointer
#include<stdio.h>

int main(){
    int a[4];
    int *ptr;
    int i,sum=0;
    ptr=a;

    printf("Enter 4 values : \n");
    for(i=0;i<4;i++){
        scanf("%d",&a[i]);
    }

    printf("\nValues of array (using pointer)\n");
    for(i=0;i<4;i++){
        //printf("%d\t",a[i]);
        printf("%d\t",ptr[i]);
        sum+=ptr[i];
    }
    printf("\nSum is : %d",sum);

}
