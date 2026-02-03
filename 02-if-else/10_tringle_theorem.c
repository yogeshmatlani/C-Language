// Develop a program that takes three integers as input, representing the sides of a triangle. Use nested if-else
// statements to determine and print whether the triangle is valid (based on the triangle inequality theorem) and
// what type it is (equilateral, isosceles, scalene, or right-angled).

#include <stdio.h>

int main()
{
    int a, b, c;

    printf("enter the side one first tringle: ");
    scanf("%d", &a);
    printf("enter the side second of tringle: ");
    scanf("%d", &b);
    printf("enter the side third of tringle: ");
    scanf("%d", &c);

    if ((a + b > c) && (a + c > b) && (b + c > a))
    {
        if (a == b && b == c)
        {
            printf("The triangle is Equilateral.\n");
        }
        else if (a == b || b == c || a == c)
        {
            printf("The triangle is Isosceles.\n");
        }
        else
        {
            printf("The triangle is Scalene.\n");
        }
    }
    else
    {
        printf("The entered side lengths do not form a valid triangle.\n");
    }
}