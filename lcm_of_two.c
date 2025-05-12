#include<stdio.h>
int main(){
    int lcm, a, b, i;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    for(i = 1; i <= a * b; i++){
        if(i % a == 0 && i % b == 0){
            lcm = i;
            break;
        }
    }
}