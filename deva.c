#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;
    int (*ptr)(int, int);

    ptr = add;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int result = (*ptr)(num1, num2);

    printf("The sum is: %d\n", result);

    return 0;
}