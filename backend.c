#include <stdio.h>
#include <string.h>
int main() {
    int choice, cups, sugar, customer = 1;
    char size, milkOption, continueChoice;
    float basePrice = 0.0, price = 0.0, total = 0.0, money, change;
    char feedback[100];
    do {
        printf("\n--- Welcome Customer #%d ---\n", customer++);
        printf("Menu:\n");
        printf("1. Hot Coffee\n");
        printf("2. Cold Coffee\n");
        printf("3. Simple Tea\n");
        printf("4. Masala Tea\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);
        if (choice < 1 || choice > 4) {
            printf("Invalid choice! Please restart the order.\n");
            continue;
        }
        printf("How many cups? (Max 15): ");
        scanf("%d", &cups);
        if (cups <= 0 || cups > 15) {
            printf("Invalid number of cups. Please choose between 1 and 15.\n");
            continue;
        }
        if (choice == 1 || choice == 2) {
            printf("Choose cup size: S (Small), M (Medium), L (Large): ");
            scanf(" %c", &size);
            switch (size) {
                case 'S': case 's':
                    basePrice = (choice == 1) ? 20 : 30;
                    break;
                case 'M': case 'm':
                    basePrice = (choice == 1) ? 40 : 50;
                    break;
                case 'L': case 'l':
                    basePrice = (choice == 1) ? 60 : 70;
                    break;
                default:
                    printf("Invalid size! Please restart the order.\n");
                    continue;
            }
        } else if (choice == 3) {
            basePrice = 20;
        } else if (choice == 4) {
            basePrice = 40;
        }
        printf("Do you want milk? (Y/N): ");
        scanf(" %c", &milkOption);
        if (milkOption != 'Y' && milkOption != 'y' && milkOption != 'N' && milkOption != 'n') {
            printf("Invalid milk option! Please restart the order.\n");
            continue;
        }
        printf("How many teaspoons of sugar per cup? (0 to 5): ");
        scanf("%d", &sugar);
        if (sugar < 0 || sugar > 5) {
            printf("Invalid sugar amount. Please choose between 0 and 5.\n");
            continue;
        }
        price = basePrice;
        total = cups * price;
        printf("\n--- Order Summary ---\n");
        switch (choice) {
            case 1: printf("Drink: Hot Coffee\n"); break;
            case 2: printf("Drink: Cold Coffee\n"); break;
            case 3: printf("Drink: Simple Tea\n"); break;
            case 4: printf("Drink: Masala Tea\n"); break;
        }
        if (choice == 1 || choice == 2)
            printf("Size: %c\n", size);
        printf("Milk: %s\n", (milkOption == 'Y' || milkOption == 'y') ? "With Milk" : "No Milk");
        printf("Sugar: %d tsp per cup\n", sugar);
        printf("Cups: %d\n", cups);
        printf("Total Bill: %.2f\n", total);
        do {
            printf("Enter money to pay: ");
            scanf("%f", &money);
            if (money < total) {
                printf("Insufficient money. You need at least %.2f\n", total);
            }
        } while (money < total);
        change = money - total;
        if (change > 0)
            printf("Your change: %.2f\n", change);
        printf("Thank you for your purchase!\n");
        printf("Please give us your feedback: ");
        getchar();
        fgets(feedback, sizeof(feedback), stdin);
        printf("Your feedback: %s", feedback);
        printf("\nNext customer? (Y/N): ");
        scanf(" %c", &continueChoice);
    } while (continueChoice == 'Y' || continueChoice == 'y');
    printf("\nMachine shutting down. Have a nice day!\n");
    return 0;
}
