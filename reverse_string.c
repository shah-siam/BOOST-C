#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    char reversed[100];
    int length = 0;
    length = strlen(str);
    for(int i = 0; i < length; i++){
        reversed[i] = str[length - i - 1];
    }
    reversed[length] = '\0'; // Null-terminate the reversed string
    printf("Reversed string: %s", reversed);
}