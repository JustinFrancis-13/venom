#include <stdio.h>

void concatenateStrings(char *str1, char *str2, char *result) {
    int i, j;

    // Copy the first string to the result
    for (i = 0; str1[i] != '\0'; ++i) {
        result[i] = str1[i];
    }

    // Concatenate the second string to the result
    for (j = 0; str2[j] != '\0'; ++j) {
        result[i + j] = str2[j];
    }

    // Null-terminate the result
    result[i + j] = '\0';
}

int main() {
    char str1[50], str2[50], result[100];

    // Input two strings
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);

    // Concatenate strings without using string functions
    concatenateStrings(str1, str2, result);

    // Output the concatenated string
    printf("Concatenated String: %s\n", result);

    return 0;
}