#include <stdio.h>

int main() {
    int first_num, second_num;
    int leap_years[100]; 
    int count = 0;

    printf("Enter the first number: ");
    scanf("%d", &first_num);
    printf("Enter the second number: ");
    scanf("%d", &second_num);
    
    for (int year = first_num; year <= second_num; year++) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            leap_years[count] = year;
            count++;
        }
    }
    
    printf("The array is: ");
    for (int i = 0; i < count; i++) {
        printf("%d", leap_years[i]);
        if (i != count - 1)
            printf(", ");
    }
}

