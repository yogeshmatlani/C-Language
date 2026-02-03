// Write a C program that takes a person's height (in meters) and weight (in kilograms) as input and uses if-else
// statements to calculate and print their BMI (Body Mass Index) category based on the following categories:

// Underweight: BMI < 18.5
// Normal Weight: 18.5 <= BMI < 25
// Overweight: 25 <= BMI < 30
// Obese: BMI >= 30

#include <stdio.h>

int main()
{
    float height, weight;

    printf("enter the weight in kg: ");
    scanf("%f", &weight);
    printf("enter the height in meters: ");
    scanf("%f", &height);

    float bmi = weight / (height * height);

    if (bmi < 18.5)
    {
        printf("body mass index is %.2f\n underweight", bmi);
    }
    else if (bmi >= 18.5 && bmi < 25)
    {
        printf("body mass index is %.2f\n Normal weight", bmi);
    }
    else if (bmi >= 25 && bmi < 30)
    {
        printf("body mass index is %.2f\n overweight", bmi);
    }
    else if (bmi >= 30)
    {
        printf("body mass index is %.2f\n obese", bmi);
    }
}