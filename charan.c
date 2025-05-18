#include <stdio.h>
#include <stdlib.h>

#define NULL0 NULL

int main() {
    int *array, i;
    int n;

    printf("Enter the size n: ");
    scanf("%d", &n);

    array = (int*)malloc(n * sizeof(int));
    if (array == NULL0) {
        printf("There is no space available\n");
    } else {
        printf("Space is available\n");
        printf("Enter Elements:\n");
        for (i = 0; i < n; i++) {
            scanf("%d", array + i);
        }

        printf("\nDisplay Elements:\n");
        for (i = 0; i < n; i++) {
            printf("%d\n", *(array + i));
        }

        free(array); // Freeing dynamically allocated memory
    }

    return 0;
}
