// Write a program to find unit, ten, hundred, thousand, and ten thousands in a five digit number.
// Also calculate sum of the five digits.

#include<stdio.h>

int main()
{
    int num;

    printf("enter the 5 digit number: ");
    scanf("%5d", &num);

    int unit = num%10;
    int ten = (num/10)%10;
    int hundrad = (num/100)%10;
    int thousand = (num/1000)%10;
    int ten_thousand = num/10000;

    int sum = unit+ten+hundrad+thousand+ten_thousand;

    printf("\nunit is %d\n", unit);
    printf("ten is %d\n", ten);
    printf("hundrad is %d\n", hundrad);
    printf("thousand is %d\n", thousand);
    printf("ten_thousand is %d\n", ten_thousand);

    printf("the sum of 5 digit is: %d", sum);


}