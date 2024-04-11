#include <stdio.h>

int main() {
    float hra, da, ta;
    int gross_salary, basic_salary;

    printf("Enter Basic Salary:- ");
    scanf("%d", &basic_salary);
    printf("Enter HRA:- ");
    scanf("%f", &hra);
    printf("Enter DA:- ");
    scanf("%f", &da);
    printf("Enter TA:- ");
    scanf("%f", &ta);
    
    gross_salary = basic_salary + (basic_salary * hra / 100) + (basic_salary * da / 100) + (basic_salary * ta / 100);

    printf("Gross Salary is %d", gross_salary);

}

