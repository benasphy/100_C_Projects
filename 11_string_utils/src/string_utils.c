#include "string_utils.h"

/* -------------------------
   Calculate string length
   ------------------------- */
int my_strlen(const char *str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

/* -------------------------
   Copy string from src to dest
   ------------------------- */
void my_strcpy(char *dest, const char *src) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0'; // Null terminate destination
}

/* -------------------------
   Compare two strings
   ------------------------- */
int my_strcmp(const char *str1, const char *str2) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return (str1[i] - str2[i]);
        }
        i++;
    }
    return str1[i] - str2[i]; // Handles unequal length strings
}