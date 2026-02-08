#include <stdio.h>
#include <time.h>
#include "stopwatch.h"

/* Internal state (private to this file) */
static time_t start_time = 0;
static time_t end_time = 0;
static double elapsed_seconds = 0.0;
static int running = 0;

void show_menu(void) {
    printf("\n⏱️ Simple Stopwatch\n");
    printf("-------------------\n");
    printf("1. Start\n");
    printf("2. Stop\n");
    printf("3. Show elapsed time\n");
    printf("4. Reset\n");
    printf("0. Exit\n");
    printf("Choose an option: ");
}

void start_stopwatch(void) {
    if (running) {
        printf("⚠️ Stopwatch already running.\n");
        return;
    }

    start_time = time(NULL);
    running = 1;
    printf("▶️ Stopwatch started.\n");
}

void stop_stopwatch(void) {
    if (!running) {
        printf("⚠️ Stopwatch is not running.\n");
        return;
    }

    end_time = time(NULL);
    elapsed_seconds += difftime(end_time, start_time);
    running = 0;

    printf("⏹️ Stopwatch stopped.\n");
}

void reset_stopwatch(void) {
    start_time = 0;
    end_time = 0;
    elapsed_seconds = 0.0;
    running = 0;

    printf("🔄 Stopwatch reset.\n");
}

void show_elapsed_time(void) {
    double total_time = elapsed_seconds;

    if (running) {
        time_t now = time(NULL);
        total_time += difftime(now, start_time);
    }

    int hours = (int)(total_time / 3600);
    int minutes = (int)(total_time / 60) % 60;
    int seconds = (int)total_time % 60;

    printf("⏲️ Elapsed time: %02d:%02d:%02d\n", hours, minutes, seconds);
}
