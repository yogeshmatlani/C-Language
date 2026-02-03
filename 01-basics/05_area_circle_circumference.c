// The radius of a circle is input through the keyboard. Write a program to calculate the area &
// circumference of the circle.

#include<stdio.h>

int main()
{
    int radius;
    float pi = 3.14; 

    printf("enter the radius: ");
    scanf("%d", &radius);

    float area = pi*radius*radius;
    float circumference = 2*pi*radius;

    printf("\nThe area of circle is: %.2f\n The circumference is: %.2f", area, circumference);
}