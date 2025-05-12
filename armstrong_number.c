#include <stdio.h>
#include <math.h>

int main() {
    int number, count = 0, numbermemory, checknumber = 0, digit;

    printf("Enter an integer: ");
    scanf("%d", &number);
    numbermemory = number;
    for (int i = number; i != 0; i /= 10) {
        count++;
    }
    for (int i = number; i != 0; i /= 10) {
        digit = i % 10;
        checknumber += (int)round(pow(digit, count));
    }
    if (checknumber == numbermemory) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}