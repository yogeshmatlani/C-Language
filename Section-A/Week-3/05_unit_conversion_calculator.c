// Design a program that acts as a unit conversion calculator. It should provide options for converting between
// different units (e.g., length, temperature, currency) based on the user's choice from a menu. Use a switch-case
// statement to implement the conversions.

#include <stdio.h>

int main()
{
    int outer_manue, inner_manue;
    float m, cm, celsius, fahrenheit, usd, pkr;

    printf("What you want to calculate. (1: length, 2: temperature, 3:  currency): ");
    scanf("%d", &outer_manue);

    switch (outer_manue)
    {
    case 1:

        printf("\nwhat you want to calculate in length (1: m to cm or 2: cm to m): ");
        scanf("%d", &inner_manue);

        switch (inner_manue)
        {
        case 1:
            printf("\nenter thr meters to convert in centi-meter: ");
            scanf("%f", &m);

            cm = m * 100;

            printf("\nconverted in cm: %.2f", cm);
            break;
        case 2:
            printf("\nenter thr centi-meters to convert in meter: ");
            scanf("%f", &cm);

            m = cm / 100;
            printf("\nconverted in m: %.2f", m);
            break;
        default:
            printf("\nplz enter valid length value");
            break;
        }
        break;

    case 2:
        printf("\nwhat you want to convert (1: celsius to fahrenheit or 2: fahrenheit to celsius): ");
        scanf("%d", &inner_manue);

        switch (inner_manue)
        {
        case 1:
            printf("\nenter the celsius to fahrenheit: ");
            scanf("%f", &celsius);

            fahrenheit = celsius * (9 / 5) + 32;

            printf("\ncelsius to fahrenheit: %.2f", fahrenheit);
            break;

        case 2:
            printf("\nenter the fahrenheit to celsius: ");
            scanf("%f", &fahrenheit);

            celsius = (fahrenheit - 32) * (5 / 9);

            printf("\nconverted fahrenheit to celsius: %.2f", celsius);
            break;

        default:
            printf("\nplz enter valid temperature");
            break;
        }
        break;

    case 3:
        printf("\nwhat you want to calculate (1: PKR to USD or 2: USD to PKR): ");
        scanf("%d", &inner_manue);

        switch (inner_manue)
        {
        case 1:
            printf("\nenter the amount in pkr to convert usd: ");
            scanf("%f", &pkr);

            usd = pkr * 0.0035;

            printf("\nconverted pkr amount in usd $%.2f", usd);
            break;
        case 2:
            printf("\nenter the amount in usd to convert in pkr: ");
            scanf("%f", &usd);

            pkr = usd * 282.52;

            printf("\nconverted usd amount in pkr Rs %.2f", pkr);
            break;
        default:
            printf("\nplx enter valid currency");
            break;
        }
        break;

    default:
        printf("invalid");
        break;
    }
}