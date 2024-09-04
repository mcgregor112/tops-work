#include <stdio.h>
#include <string.h>

struct FoodItem {
    char name[30];
    int price;
};

void displayMenu(struct FoodItem menu[], int size) {
    printf("\n---------- MENU ----------\n");
    for (int i = 0; i < size; i++) {
        printf("%d.%s              price = %drs/pcs\n", i + 1, menu[i].name, menu[i].price);
    }
}

int takeOrder(struct FoodItem menu[], int size) {
    int totalBill = 0;
    int choice, quantity;
    char more;

    do {
        displayMenu(menu, size);

        printf("Please Enter your choose...  : ");
        scanf("%d", &choice);
        printf("\nyou have selected %s.\n", menu[choice - 1].name);

        if (choice < 1 || choice > size) {
            printf("Invalid choice. Please choose a valid menu item.\n");
            continue;
        }
        printf("Enter your quantity :  ");
        scanf("%d", &quantity);
        printf("Amount : %d/1pc\n", menu[choice - 1].price);

        totalBill += menu[choice - 1].price * quantity;
        printf("Total Amount : %drs\n", totalBill);
        printf("Do oyu want place more orders ? y & n): ");
        scanf(" %c", &more);

    } while (more == 'y' || more == 'Y');

    return totalBill;
}

int main() {
    struct FoodItem menu[] = {
        {"Pizza",  180},
        {"Burger", 100},
        {"Dosa",   120},
        {"Idli",   50},
    };

    int menuSize = sizeof(menu) / sizeof(menu[0]);
    int totalBill = takeOrder(menu, menuSize);

    return 0;
}
