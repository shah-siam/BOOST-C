#include <stdio.h>
#include <string.h>
#include <ctype.h>
void sort_string(char str[]) {      // function for sorting
    int len = strlen(str);
    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            if (str[i] > str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}
void to_lowercase(char str[]) {         // function for lowercase
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    to_lowercase(str1);   // lowercase
    to_lowercase(str2);
 
    sort_string(str1);    // short
    sort_string(str2);

    //compare
    if (strcmp(str1, str2) == 0) {
        printf("Anagram \n");
    } else {
        printf("Not Anagram \n");
    }

    return 0;
}
