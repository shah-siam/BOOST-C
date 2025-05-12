#include<stdio.h>

int main() {
    int number, factorial = 1;
    printf("Enter an integer: ");
    scanf("%d", &number);

    for (int i = number; i > 0; i--) {
        factorial *= i;
    }

    printf("Factorial of %d is: %d\n", number, factorial);
    return 0;
}