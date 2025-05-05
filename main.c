#include "main.h"
#include "validation.h"
#include "shop.h"

int main() {
    int choice;
    while (1) {
        printf("\n\n\t******************Welcome to Shop Cart*******************\n");
        printf("\n1) SIGNUP");
        printf("\n2) LOGIN");
        printf("\n3) EXIT");

        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                signup();
                break;
            case 2:
                login();
                break;
            case 3:
                printf("\n\tThank you! Visit Again!\n");
                return 0;
            default:
                printf("\nInvalid choice! Please try again.\n");
        }
    }
}
