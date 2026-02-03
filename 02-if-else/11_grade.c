// Create a program that asks the user for their test score and the number of attendance days. Use nested if-else
// statements to determine their grade based on the following criteria:

// A: Score >= 90 and Attendance >= 90%
// B: Score >= 80 and Attendance >= 80%
// C: Score >= 70 and Attendance >= 70%
// D: Score >= 60 and Attendance >= 60%
// F: Otherwise

#include <stdio.h>

int main()
{
    int score, attend;

    printf("enter the test score (1-100) in percentage: ");
    scanf("%d", &score);
    printf("enter the attendance (1-100) in percentage: ");
    scanf("%d", &attend);

    if (score <= 100 && attend <= 100)
    {
        if (score >= 90 && attend >= 90)
        {
            printf("your test score is %d and attendance is %d so, A grade", score, attend);
        }
        else if (score >= 80 && attend >= 80)
        {
            printf("your test score is %d and attendance is %d so, B grade", score, attend);
        }
        else if (score >= 70 && attend >= 70)
        {
            printf("your test score is %d and attendance is %d so, C grade", score, attend);
        }
        else if (score >= 60 && attend >= 60)
        {
            printf("your test score is %d and attendance is %d so, D grade", score, attend);
        }
        else
        {
            printf("your test score is %d and attendance is %d so, F grade", score, attend);
        }
    }
    else
    {
        printf("invalid score and attendence");
    }
}