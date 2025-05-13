#include <stdio.h>

int main() {
    char src[] = "Hello, world!";
    char dest[100];
    int i = 0;

    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0'; // Null-terminate the destination string

    printf("Copied string: %s\n", dest);

    return 0;
}
