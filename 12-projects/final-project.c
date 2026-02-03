//Group no 9 hackathon code
#include <stdio.h>
#include <string.h>

// declare constant 1st. the size of structure array and 2nd. path of file.
#define MAX_ITEMS 100
#define FILE_NAME "C:\\VSCode\\C\\HEKATHON_PROJECT_3.txt" // path is variable for different system, after adding path write the name of the file you want it to be saved as

// create a structure datatype to store item details
struct Item
{
    int id;
    char name[50];
    int quantity;
    float price;
};

// declaring of 7 functions
void loadFromFile(struct Item *items, int *count);
void saveToFile(struct Item *items, int count);
void addItem(struct Item *items, int *count);
void displayAll(struct Item *items, int count);
void searchItem(struct Item *items, int count);
void updateItem(struct Item *items, int count);
void deleteItem(struct Item *items, int *count);


int main()
{
    // declare the structure array with name inventory. and size MAX_ITEMS that is constant
    struct Item inventory[MAX_ITEMS];
    int itemCount = 0;
    int choice = 0;

    // Load data automatically on start of main function
    loadFromFile(inventory, &itemCount);

    do
    {
        // menu display to user choose option or manupilate items
        printf("\n===========================\n");
        printf("INVENTORY MANAGEMENT SYSTEM");
        printf("\n===========================\n");
        printf("1. Add Item\n2. Display All Items\n3. Search Item\n4. Update Item\n5. Delete Item\n6. Save & Exit\n");
        

        printf("Enter choice: ");
        scanf("%d", &choice);

        while (getchar() != '\n')
            ; // Clear buffer

        // call function with help of switch case. cases depends on user's choice
        switch (choice)
        {
        case 1:
            addItem(inventory, &itemCount);
            break;
        case 2:
            displayAll(inventory, itemCount);
            break;
        case 3:
            searchItem(inventory, itemCount);
            break;
        case 4:
            updateItem(inventory, itemCount);
            break;
        case 5:
            deleteItem(inventory, &itemCount);
            break;
        case 6:
            saveToFile(inventory, itemCount);
            printf("\nData saved successfully to '%s'. Exiting.\n", FILE_NAME);
            break;
        default:
            printf("Invalid choice! Try again.\n");
        }
    } while (choice != 6);

    return 0;
}


void loadFromFile(struct Item *items, int *count)
{
    FILE *file = fopen(FILE_NAME, "r");
    *count = 0; // Reset count

    if (file == NULL)
        return; // File doesn't exist yet, that's fine

    char headerBuffer[200];
    // 1. Skip the "Table Header" line
    fgets(headerBuffer, sizeof(headerBuffer), file);

    // 2. Read lines until End of File (EOF)
    // The format string "%d | %49[^|] | %d | %f" matches the save format
    // %49[^|] means "Read string until you see a '|' symbol"
    while (fscanf(file, "%d | %49[^|] | %d | %f",
                  &items[*count].id,
                  items[*count].name,
                  &items[*count].quantity,
                  &items[*count].price) == 4)
    {

        // Clean up trailing spaces in name if necessary (optional but good)
        int len = strlen(items[*count].name);
        if (items[*count].name[len - 1] == ' ')
            items[*count].name[len - 1] = '\0';

        (*count)++;
    }

    fclose(file);
}

void saveToFile(struct Item *items, int count)
{
    FILE *file = fopen(FILE_NAME, "w");
    if (file == NULL)
    {
        printf("Error saving file!\n");
        return;
    }

    // 1. Write the Table Header
    // %-5s means "Align Left, 5 spaces wide"
    fprintf(file, "%-5s | %-20s | %-8s | %-8s\n", "ID", "Name", "Qty", "Price");

    // 2. Write the Data Rows
    for (int i = 0; i < count; i++)
    {
        fprintf(file, "%-5d | %-20s | %-8d | %-8.2f\n",
                items[i].id,
                items[i].name,
                items[i].quantity,
                items[i].price);
    }

    fclose(file);
}


void addItem(struct Item *items, int *count)
{
    // condition Check if the shop is full show a msg else continue
    if (*count >= MAX_ITEMS)
    {
        printf("\nInventory Full!\n");
        return;
    }

    // declare and intilaization pointer *item with address of structure. easy to manuplate index's values with arrow operator
    struct Item *item = &items[*count];
    int idExists;

    // validation loop. It keeps asking the user for an ID until they provide a valid, unique one.
    do
    {
        idExists = 0;
        printf("\nEnter ID: ");
        scanf("%d", &item->id);
        while (getchar() != '\n')
            ;

        // check all id and just input id. if id match show error. and flag veriable assign 1 to ask again valid id.
        for (int i = 0; i < *count; i++)
        {
            if (items[i].id == item->id)
            {
                printf("ID already exists! Try again.\n");
                idExists = 1;
                break;
            }
        }
    } while (idExists);

    // take input of product details
    printf("Enter Name: ");
    fgets(item->name, 50, stdin);

    //This line finds that \n and replaces it with \0 (the null terminator) so the string ends cleanly.
    item->name[strcspn(item->name, "\n")] = 0; 

    printf("Enter Quantity: ");
    scanf("%d", &items[*count].quantity);

    printf("Enter Price: ");
    scanf("%f", &item->price);

    // increase the count value not address.
    (*count)++;
    printf("Item added successfully!\n");
}

void displayAll(struct Item *items, int count)
{
    // check if products are 0 print no items in inventory.
    if (count == 0)
    {
        printf("\nNo items in inventory.\n");
        return;
    }

    // Print a string, Left-Aligned, taking up 5 spaces and Print the Header Row
    printf("\n%-5s | %-20s | %-8s | %-8s\n", "ID", "Name", "Qty", "Price");
    printf("------+----------------------+----------+----------\n");

    // print the all details
    for (int i = 0; i < count; i++)
    {
        printf("%-5d | %-20s | %-8d | Rs%-7.2f\n",
               items[i].id, items[i].name, items[i].quantity, items[i].price);
    }
}

void searchItem(struct Item *items, int count)
{
    int id, found = 0;
    printf("\nEnter ID to search: ");
    scanf("%d", &id);

    // search and match same just input id to display its product details
    for (int i = 0; i < count; i++)
    {
        if (items[i].id == id)
        {
            printf("\nItem Found:\n");
            printf("ID: %d\nName: %s\nQty: %d\nPrice: %.2f\n",
                   items[i].id, items[i].name, items[i].quantity, items[i].price);
            found = 1;
            break;
        }
    }
    if (found == 0)
        printf("Item not found.\n");
}

void updateItem(struct Item *items, int count)
{
    int id, found = 0;
    // take the ID to update
    printf("\nEnter ID to update: ");
    scanf("%d", &id);
    while (getchar() != '\n')
        ;

    // The Search Loop
    for (int i = 0; i < count; i++)
    {
        // Match Found id to Overwrite Data or update and take new inputs
        if (items[i].id == id)
        {
            printf("Enter New Name: ");
            fgets(items[i].name, 50, stdin);
            items[i].name[strcspn(items[i].name, "\n")] = 0;

            printf("Enter New Quantity: ");
            scanf("%d", &items[i].quantity);

            printf("Enter New Price: ");
            scanf("%f", &items[i].price);

            printf("Item updated successfully!\n");
            found = 1;
            break; // Stop searching once updated
        }
    }
    if (!found)
        printf("Item not found.\n");
}

void deleteItem(struct Item *items, int *count)
{
    int id, found = 0;
    printf("\nEnter ID to delete: ");
    scanf("%d", &id);

    for (int i = 0; i < *count; i++)
    {
        if (items[i].id == id)
        {
            // The Shifting Loop. Start at the deletion point (j = i) Stop one step before the end (*count - 1)

            for (int j = i; j < *count - 1; j++)
            {
                items[j] = items[j + 1];
            }
            (*count)--;
            printf("Item deleted successfully!\n");
            found = 1;
            break;
        }
    }
    if (!found)
        printf("Item not found.\n");
}