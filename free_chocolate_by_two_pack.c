#include<stdio.h>
int main(){
    int n, x;
    scanf("%d", &x);
    n = x;

    while(x > 1){
        n = n + x / 2;
        x = x / 2 + x % 2;
    }

    printf("%d\n", n);
    return 0;
}
