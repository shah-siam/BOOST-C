#include <stdio.h>
#include <string.h>

void findAllOccurrences(char text[], char pattern[]) {
    int n = strlen(text);
    int m = strlen(pattern);
    int found = 0;

    for (int i = 0; i <= n - m; i++) {
        int j;
        for (j = 0; j < m; j++) {
            if (text[i + j] != pattern[j])
                break;
        }
        if (j == m) {
            printf("Pattern found at index %d\n", i);
            found = 1;
        }
    }

    if (!found) {
        printf("Pattern not found\n");
    }
}

int main() {
    char text[1000], pattern[100];

    printf("Enter the text: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0'; // Remove newline

    printf("Enter the pattern: ");
    fgets(pattern, sizeof(pattern), stdin);
    pattern[strcspn(pattern, "\n")] = '\0'; // Remove newline

    findAllOccurrences(text, pattern);

    return 0;
}







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





#include<stdio.h>
#include<math.h>

int main() {
    long long binary;
    int decimal = 0, base = 1, remainder;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    while (binary > 0) {
        remainder = binary % 10;
        decimal += remainder * base;
        binary /= 10;
        base *= 2;
    }

    printf("Decimal equivalent: %d\n", decimal);
    return 0;
}
