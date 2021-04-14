#include<stdio.h>
#include<string.h>
struct Student
{
    int id, sclass;
    char name[10], addr[15];
    float mob;
};

int main()
{
    struct Student s;
    printf("Enter Studnet Id :");
    scanf("%d",&s.id);
    printf("\nEnter Student Name :");
    scanf("%s",s.name);
    printf("\nEnter Student Mob :");
    scanf("%f",&s.mob);
    printf("\nEnter Student Addr :");
    scanf("%s",s.addr);
    printf("\nEnter Student class :");
    scanf("%d",&s.sclass);

    printf("\nStudent Information :\n");
    printf("\nStudnt Id : %d",s.id);
    printf("\nStudnt Name : %s",s.name);
    printf("\nStudnt Mob : %.f",s.mob);
    printf("\nStudnt Addr : %s",s.addr);
    printf("\nStudnt class : %d",s.sclass);

    return 0;
}
/*output
Enter Studnet Id :100

Enter Student Name :AAA

Enter Student Mob :9860011111

Enter Student Addr :Daund

Enter Student class :10

Student Information :

Studnt Id : 100
Studnt Name : AAA
Studnt Mob : 9860011008
Studnt Addr : Daund
Studnt class : 10
*/
