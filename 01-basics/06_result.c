// If the marks obtained by a student in five different subjects are input through the keyboard, find out
// percentage marks obtained by the student. Assume that the maximum marks that can be obtained
// by a student in each subject is 100.

#include<stdio.h>

int main()
{
    int english, math, physics, fop, itc, total_marks;

    printf("enter the total marks: ");
    scanf("%d", &total_marks);

    printf("enter English marks: ");
    scanf("%d", &english);
    printf("enter Maths marks: ");
    scanf("%d", &math);
    printf("enter Physics marks: ");
    scanf("%d", &physics);
    printf("enter Fop marks: ");
    scanf("%d", &fop);
    printf("enter ITC marks: ");
    scanf("%d", &itc);

    int obtain = english+math+physics+fop+itc;
    float percentage = (obtain*100)/total_marks;

    printf("\nYour Obtain marks %d out of %d\n Total Percentage %.2f%%", obtain, total_marks, percentage);
}