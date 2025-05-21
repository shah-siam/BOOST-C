#include <stdio.h>
#include <string.h>

int findSubstring(char text[], char pattern[]) {
    int n = strlen(text), m = strlen(pattern);
    for (int i = 0; i <= n - m; i++) {
        int j;
        for (j = 0; j < m; j++) {
            if (text[i + j] != pattern[j]) break;
        }
        if (j == m) return i;
    }
    return -1;
}

int main() {
    char text[] = "BugHunterCodes";
    char pattern[] = "Hunter";
    int pos = findSubstring(text, pattern);
    if (pos != -1)
        printf("Pattern found at index %d\n", pos);
    else
        printf("Pattern not found\n");
    return 0;
}
