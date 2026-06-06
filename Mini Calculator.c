
#include <stdio.h>

int main() {
    int a;
    int b;
    printf("***Mini Calculator***\n");

    

        printf("Enter the first number: ");
        scanf("%d", &a);

        printf("Enter the second number: ");
        scanf("%d", &b);

        printf("**Results**\n");

        printf("Addition: %d\n", a + b);
        printf("Subtraction: %d\n", a - b);
        printf("Multiplication: %d\n", a * b);
        printf("Division:%d\n", a / b);

    return 0;
}

