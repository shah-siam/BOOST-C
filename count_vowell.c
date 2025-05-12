#include <stdio.h>
#include <ctype.h>

int main() {
    char input[1000];
    int count = 0;

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    for (int i = 0; input[i] != '\0'; i++) {
        char ch = tolower(input[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }

    printf("Number of vowels: %d\n", count);

    return 0;
}



// #include <stdio.h>
// #include <ctype.h>

// int main() {
//     char input[1000];
//     int count = 0;

//     printf("Enter a string: ");
//     fgets(input, sizeof(input), stdin);

//     for (char *str = input; *str; str++) {
//         char ch = tolower(*str);
//         if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
//             count++;
//         }
//     }

//     printf("Number of vowels: %d\n", count);

//     return 0;
// }
