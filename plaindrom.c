#include<stdio.h>
int main(){
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    int originalNumber=number;
    int reversedNumber = 0;
    while (number != 0) {
        int digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number /= 10;
    }
    if(reversedNumber == originalNumber ) {
        printf("The number is a palindrome.\n");
    } else {
        printf("The number is not a palindrome.\n");
    }
    return 0;
    
}