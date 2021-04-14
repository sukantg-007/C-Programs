#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    char name[]="Shubham";
    char name2[10];
    char name3[10];

    printf("Name is %s",name);

    //scanf to initialize name2
    printf("\nEnter your name :");
    scanf("%s",name2);

    printf("\nGiven name is : %s",name2);
    gets(name2);

    //gets to initialize name3
    printf("\nEnter your name :");
    gets(name3);

    printf("\nGiven name is : %s",name3);
    getch();
    return 0;
}

/*output_
Name is Shubham
Enter your name :AAA BBB

Given name is : AAA
Enter your name :AAA BBB

Given name is : AAA BBB
*/
