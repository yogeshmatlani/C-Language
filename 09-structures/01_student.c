#include <stdio.h>

struct student
{
    char name[50];
    int id;
    float marks;
};

int main()
{
    struct student std[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Enter std %d name: ", i + 1);
        scanf("%s", std[i].name);
        printf("Enter std %d id: ", i + 1);
        scanf("%d", &std[i].id);
        printf("Enter std %d marks: ", i + 1);
        scanf("%f", &std[i].marks);

        printf("\n");
    }
    printf("\n---------Student Information---------\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Student no %d\n", i + 1);
        printf("Name: %s\nID: %d\nMarks %.2f\n\n", std[i].name, std[i].id, std[i].marks);
    }
}
 