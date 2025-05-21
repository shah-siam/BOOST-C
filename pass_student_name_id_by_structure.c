#include<stdio.h>

struct student {
    int id ;
    char name[20];
    float marks ;
};
void display(struct student s)
{
    printf("ID: %d\n", s.id);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);
}
int main(){
    int arr[5];
    struct student s[5] = {
        {101, "shah siam", 90.3},
        {102, "abraham", 23.5},
        {103, "ashraf", 50.43},
        {104, "sams", 60.5},
        {105, "kabir", 70.5}
    };

    for (int i=0; i<5; i++){
        arr[i]=s[i].marks;
    }
    for (int i=0; i<5;  i++){
        if (arr[i] >= 40){
            display(s[i]);
        }
    }
}

