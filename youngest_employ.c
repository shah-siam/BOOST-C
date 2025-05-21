#include <stdio.h>
#include <string.h>

#define MAX_EMPLOYEES 100
#define NAME_LEN 50

typedef struct {
    char name[NAME_LEN];
    int id;
    int age;
} Employee;

int main() {
    int n;
    Employee employees[MAX_EMPLOYEES];

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter name, ID, and age for employee %d: ", i + 1);
        scanf("%s %d %d", employees[i].name, &employees[i].id, &employees[i].age);
    }

    int youngest_idx = 0;
    for (int i = 1; i < n; i++) {
        if (employees[i].age < employees[youngest_idx].age) {
            youngest_idx = i;
        }
    }

    printf("Youngest Employee: %s %d\n", employees[youngest_idx].name, employees[youngest_idx].id);

    return 0;
}