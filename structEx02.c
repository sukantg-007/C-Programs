#include<stdio.h>
#include<conio.h>
struct student
{
    int id;
    char name[10];
    int sclass;
};
int main()
{
    struct student *ptr;
    ptr=(struct student*)malloc(sizeof(struct student));
    printf("\nEnter Student Id : ");
    scanf("%d",&ptr->id);
    printf("\nEnter Student Name : ");
    scanf("%s",ptr->name);
    printf("\nEnter Student Class : ");
    scanf("%d",&ptr->sclass);

    printf("\nStudent Information \n");
    printf("%d\t%s\t%d",ptr->id,ptr->name,ptr->sclass);
    getch();
}
/*output

Enter Student Id : 100

Enter Student Name : AAA

Enter Student Class : 10

Student Information
100     AAA     10
*/
