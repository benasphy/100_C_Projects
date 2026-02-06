#include <stdio.h>
#include "converter.h"

int main() {
    int choice;

    do {
        show_menu();
        scanf("%d", &choice);

        if (choice == 0) {
            printf("👋 Exiting program. Goodbye!\n");
            break;
        }

        handle_conversion(choice);

    } while (1);

    return 0;
}
