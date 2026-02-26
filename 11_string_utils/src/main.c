#include <stdio.h>
#include "string_utils.h"

int main() {
    char str1[100];
    char str2[100];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // Length
    printf("\nLength of '%s': %d\n", str1, my_strlen(str1));
    printf("Length of '%s': %d\n", str2, my_strlen(str2));

    // Copy
    char copy[100];
    my_strcpy(copy, str1);
    printf("Copy of '%s': %s\n", str1, copy);

    // Compare
    int cmp = my_strcmp(str1, str2);
    if (cmp == 0)
        printf("'%s' is equal to '%s'\n", str1, str2);
    else if (cmp < 0)
        printf("'%s' is less than '%s'\n", str1, str2);
    else
        printf("'%s' is greater than '%s'\n", str1, str2);

    return 0;
}