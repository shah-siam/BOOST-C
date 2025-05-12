#include<stdio.h>
int main(){
    int digit,count=0;
    printf("Enter a digit: ");
    scanf("%d",&digit);
    while(digit!=0){
        digit=digit/10;
        count++;
    }
    printf("The number of digits is: %d\n",count);
    return 0;

    
    
}