#include <stdio.h>

struct Books
{
    int isbn;
    char title[100];
    float price;
};

int main()
{
    int size;
    // take input the size of structure array and store in size in veriable.
    printf("How many Books you want insert: ");
    scanf("%d", &size);

    // declare a strcture array with size and name: book
    struct Books book[size];

    // this loop excute for size times and take datails input from user and stores in structure array each member
    for (int i = 0; i < size; i++)
    {
        printf("\n-------- Book no: %d --------\n", i + 1);

        printf("Enter the ISBN: ");
        scanf("%d", &book[i].isbn);
        getchar(); // getchar used for do not skip the input and skip \n.
        printf("Enter the Book name: ");
        fgets(book[i].title, 100, stdin);
        printf("Enter the Book price: ");
        scanf("%f", &book[i].price);

        printf("\n");
    }

    printf("\n--------- Above 1000 price Books Details ------------\n\n");

    // this loop excute for size times and print details from structure array access with dot (.) operator
    for (int i = 0; i < size; i++)
    {
        if (book[i].price >= 1000)
        {
            printf("ISBN: %d\n", book[i].isbn);
            printf("Title: %s", book[i].title);
            printf("Price: %.2f\n\n", book[i].price);
        }
    }
}