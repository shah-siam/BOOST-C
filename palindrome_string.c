// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[100];
//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);
//     char reversed[100];
//     int length = 0;
//     length = strlen(str);
//     for(int i = 0; i < length; i++){
//         reversed[i] = str[length - i - 1];
//     }
//     reversed[length] = '\0'; // Null-terminate the reversed string
//     if (strcmp(str, reversed) == 0) {
//         printf("The string is a palindrome.\n");
//     } else {
//         printf("The string is not a palindrome.\n");
//     }
// }



#include<stdio.h>
#include<string.h>
int main(){
    char str[100000];
    printf("Enter a string: ");
    scanf("%s", str);
    char reversed[100000];
    int length = 0;
    length = strlen(str);
    for(int i = 0; i < length; i++){
        reversed[i] = str[length - i - 1];
    }
    reversed[length] = '\0'; // Null-terminate the reversed string
    if (strcmp(str, reversed) == 0) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
}