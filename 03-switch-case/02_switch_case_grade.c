// Design a program that calculates the grade for a student based on their test score. The program should take
// the test score as input and use a switch-case statement to determine the grade (A, B, C, D, or F) according to a
// predefined grading scale.

#include <stdio.h>

int main()
{
    int grade;

    printf("enter the grade: ");
    scanf("%d", &grade);

    if (grade <= 100)
    {
        if (grade >= 90)
        {
            grade = 1;
        }
        else if (grade >= 80)
        {
            grade = 2;
        }
        else if (grade >= 70)
        {
            grade = 3;
        }
        else if (grade >= 60)
        {
            grade = 4;
        }
        else if (grade <= 60)
        {
            grade = 5;
        }
    }
    else
    {
        printf("plz enter valid grade");
    }

    switch (grade)
    {
    case 1:
        printf("you are A grade");
        break;
    case 2:
        printf("you are B grade");
        break;
    case 3:
        printf("you are C grade");
        break;
    case 4:
        printf("you are D grade");
        break;
    case 5:
        printf("you are F grade");
        break;
    }
}