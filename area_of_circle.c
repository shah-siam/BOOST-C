#include<stdio.h>
int main(){
    int  radius;
    float area;
    printf("Enter radius of circle: ");
    scanf("%d", &radius);
    area = 3.14 * radius * radius;
    printf("Area of circle = %f\n", area);
    return 0;

}