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
