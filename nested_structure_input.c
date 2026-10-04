#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

struct Employee
{
    int id;
    char name[30];
    struct Date joiningDate;
};

int main()
{
    struct Employee employee;

    printf("Enter employee ID: ");
    scanf("%d", &employee.id);

    printf("Enter employee name: ");
    scanf("%29s", employee.name);

    printf("Enter joining date (DD MM YYYY): ");
    scanf("%d %d %d",
          &employee.joiningDate.day,
          &employee.joiningDate.month,
          &employee.joiningDate.year);

    printf("\nEmployee Details\n");
    printf("ID: %d\n", employee.id);
    printf("Name: %s\n", employee.name);
    printf("Joining Date: %02d-%02d-%04d\n",
           employee.joiningDate.day,
           employee.joiningDate.month,
           employee.joiningDate.year);

    return 0;
}
