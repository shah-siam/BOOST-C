#include<stdio.h>
int main(){
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    int reversedNumber = 0;
    while (number != 0) {
        int digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number /= 10;
    }
    printf("Reversed Number: %d\n", reversedNumber);
    return 0;
    
}