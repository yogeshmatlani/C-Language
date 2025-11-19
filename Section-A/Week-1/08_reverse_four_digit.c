// Write a program to reverse a four digit number

#include<stdio.h>

int main()
{
    int num;

    printf("enter the four digit: ");
    scanf("%d", &num);

    int a = num%10;
    int b = (num/10)%10;
    int c = (num/100)%10;
    int d = num/1000;

    printf("%d%d%d%d",a,b,c,d);
}