#include<stdio.h>
int main (){
    int a, b, n, fibo;
    printf("Enter the number of terms in Fibonacci series: ");
    scanf("%d", &n);
    a = 0;
    b = 1;
    printf("Fibonacci series: \n");
    for (int i = 1; i <= n; i++) {  
        printf("%d ", a);
        fibo = a + b;
        a = b;
        b = fibo;
    }
    printf("\n"); 
    return 0;
}