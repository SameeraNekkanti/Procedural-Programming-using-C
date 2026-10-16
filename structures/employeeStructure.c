#include <stdio.h>

struct Employee {
    int empID;
    char name[50];
    float basic;
    float bonus, final_salary;
};

int main() {
    struct Employee e[200];
    int n, i, highest = 0;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter employee ID: ");
        scanf("%d", &e[i].empID);

        printf("Enter employee name: ");
        scanf("%s", e[i].name);

        printf("Enter basic salary: ");
        scanf("%f", &e[i].basic);

        if (e[i].basic >= 50000) {
            e[i].bonus = e[i].basic * 0.10;
        } else {
            e[i].bonus = e[i].basic * 0.05;
        }

        e[i].final_salary = e[i].basic + e[i].bonus;
    }

    // Find employee with highest final salary
    for (i = 1; i < n; i++) {
        if (e[i].final_salary > e[highest].final_salary) {
            highest = i;
        }
    }

    // Display all employee details
    printf("\n--- Employee Details ---\n");

    for (i = 0; i < n; i++) {
        printf("\nEmployee ID: %d\n", e[i].empID);
        printf("Name: %s\n", e[i].name);
        printf("Basic Salary: Rs. %.2f\n", e[i].basic);
        printf("Bonus: Rs. %.2f\n", e[i].bonus);
        printf("Final Salary: Rs. %.2f\n", e[i].final_salary);
    }

    // Display highest-paid employee
    printf("\n--- Employee with Highest Final Salary ---\n");
    printf("Employee ID: %d\n", e[highest].empID);
    printf("Name: %s\n", e[highest].name);
    printf("Final Salary: Rs. %.2f\n",
           e[highest].final_salary);

    return 0;
}l
