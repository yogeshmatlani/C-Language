// Write a program to check whether the number entered by the user is zero or not

#include<stdio.h>

int main()
{
    int num;

    printf("enter thr number to check zero or non-zero: ");
    scanf("%d", &num);

    if(num == 0)
    {
        printf("The number you entered %d is zero", num);
    }
    else{
        printf("The number you entered %d is non-zero", num);
    }
}