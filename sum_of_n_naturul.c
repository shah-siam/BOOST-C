#include<stdio.h>
int main(){
    int number;
    printf("Enter a number: "); 
    scanf("%d", &number);
    int sum = 0;
    for(int i = 1; i <= number; i++){
        sum += i;
    }
    printf("Sum of first %d natural numbers is: %d\n", number, sum);
    return 0;
}