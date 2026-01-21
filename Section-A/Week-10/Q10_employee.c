// Q10: Create a structure Employee (ID, Name, Salary). Input 5 employees and display the one with the lowest
// salary.

#include <stdio.h>
// A user defined data type employee.
struct employee
{
    int id;
    char name[25];
    float salary;
}

main()
{
    // declare with name emp. and this is structure array
    struct employee emp[5];
    float lowest = 0;

    // This loop excutes for 5 times. and take inputs and store input values in structure array.
    for (int i = 0; i < 5; i++)
    {
        printf("-------- Employee no:%d ----------\n\n", i + 1);

        printf("Enter the id: ");
        scanf("%d", &emp[i].id);
        getchar();
        printf("Enter the Name: ");
        fgets(emp[i].name, sizeof(emp[i].name), stdin);
        printf("Enter the Salary: ");
        scanf("%f", &emp[i].salary);
        printf("\n");

        // first calculated the Highest salary in veriable (lowest) if lowest is less than salary if true assign it in lowest
        if (emp[i].salary >= lowest)
        {
            lowest = emp[i].salary;
        }
    }

    // this loop print all stored data in strucutre array.
    printf("---------- Employee Information ----------\n");
    for (int i = 0; i < 5; i++)
    {
        printf("ID: %d\n", emp[i].id);
        printf("Name: %s", emp[i].name);
        printf("Salary: %.2f\n\n", emp[i].salary);

        // now condition check for lowest salary. because veriable already contains highest salary.
        // if current index's sal less than lowest . if true it assign it into reassign salary into lowest veriable.
        if (emp[i].salary <= lowest)
        {
            lowest = emp[i].salary;
        }
    }

    // print the lowest salary .
    printf("\nThe lowest Salary is: %.2f", lowest);
}