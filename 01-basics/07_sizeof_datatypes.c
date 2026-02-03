// Write a program to print the size of char, float, double and long double data types in C

#include<stdio.h>

int main()
{
    printf("The int reserves space in memory: %zu\n",sizeof(int));
    printf("The float reserves space in memory: %zu\n",sizeof(float));
    printf("The char reserves space in memory: %zu\n",sizeof(char));
    printf("The double reserves space in memory: %zu\n",sizeof(double));
    printf("The long reserves space in memory: %zu\n",sizeof(long));
}