#include <stdio.h>
#include "stopwatch.h"

int main() {
    int choice;

    do {
        show_menu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                start_stopwatch();
                break;

            case 2:
                stop_stopwatch();
                break;

            case 3:
                show_elapsed_time();
                break;

            case 4:
                reset_stopwatch();
                break;

            case 0:
                printf("👋 Exiting stopwatch. Goodbye!\n");
                break;

            default:
                printf("❌ Invalid choice.\n");
        }

    } while (choice != 0);

    return 0;
}
