//print value of a variable using pointer
#include<stdio.h>
int main(){
    int a=10;
    int *ptr;//declaration of pointer
    ptr=&a;//initialization of pointer

    printf("Value of a : %d\n",a);
    printf("Address of a : %u\n",&a);
    printf("Value of ptr: %u\n",ptr);
    printf("Value of ptr(using pointer) : %d",*ptr);
}
