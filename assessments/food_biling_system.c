#include <stdio.h>
#include <string.h>

struct FoodItem {
    char name[30];
    int price;
};

void displayMenu(struct FoodItem menu[], int size) {
    printf("\nAvailable Food Items:\n");
    for (int i = 0; i < size; i++) {
        printf("%d. %s: Rs %d\n", i + 1, menu[i].name, menu[i].price);
    }
}

int takeOrder(struct FoodItem menu[], int size) {
    int totalBill = 0;
    int choice, quantity;
    char more;

    do {
        displayMenu(menu, size);

        printf("Please select a food item by entering the corresponding number: ");
        scanf("%d", &choice);

        if (choice < 1 || choice > size) {
            printf("Invalid choice. Please choose a valid menu item.\n");
            continue;
        }
        printf("How many %s(s) would you like to order? ", menu[choice - 1].name);
        scanf("%d", &quantity);

        totalBill += menu[choice - 1].price * quantity;
        printf("You have added %d %s(s) to your order. Current total: Rs%d\n", quantity, menu[choice - 1].name, totalBill);
        printf("Would you like to order another item? (y/n): ");
        scanf(" %c", &more);

    } while (more == 'y' || more == 'Y');

    return totalBill;
}

int main() {
    struct FoodItem menu[] = {
        {"Pizza",     Rs 180},
        {"Burger",    Rs 100},
        {"Dosa",      Rs 120},
        {"Idli",      Rs 50},
    };

    int menuSize = sizeof(menu) / sizeof(menu[0]);
    printf("Welcome to the Food Ordering System\n");
    float totalBill = takeOrder(menu, menuSize);
    printf("\nThank you for your order! Your final bill is: %d\n", totalBill);

    return 0;
}
