#include<stdio.h>
int main(){
    int hight, base;
    float area;
    printf("Enter height of triangle: ");
    scanf("%d", &hight);
    printf("Enter base of triangle: ");
    scanf("%d", &base);
    area = 0.5 * base * hight;
    printf("Area of triangle = %.2f\n", area);
    return 0;
    
}