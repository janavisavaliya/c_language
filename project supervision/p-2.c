/*Write a Program to generate mark sheets for a student. Enter the marks of 5 students in 
Chemistry, Mathematics, and Physics (each out of 100) using a Structure having attributes: roll 
no, name, chem_marks, maths_marks, and phy_marks. Display the percentage of each student.*/

#include <stdio.h>
struct Student {
    int roll_no;
    char name[50];
    int chem_marks;
    int maths_marks;
    int phy_marks;
};

    float calculate_percentage(int total_marks) {
    return (float)total_marks / 300 * 100;
}

int main() {
	
	int n;
	printf("enter detail of student:");
	scanf("%d",&n);
	
    struct Student students[n];
    int i;

    for (i = 0; i <=5; i++) {
       
        printf("Roll no : ");
        scanf("%d", &students[i].roll_no);
        printf("Name : ");
        scanf("%s", students[i].name);
        printf("Chemistry : ");
        scanf("%d", &students[i].chem_marks);
        printf("Mathematics : ");
        scanf("%d", &students[i].maths_marks);
        printf("Physics : ");
        scanf("%d", &students[i].phy_marks);
        printf("\n");
    }

    for (i = 0; i < 5; i++) {
        int total_marks = students[i].chem_marks + students[i].maths_marks + students[i].phy_marks;
        float percentage = calculate_percentage(total_marks);

        printf("%s (%d)\n", students[i].name, students[i].roll_no);
        printf("Chemistry : %d\n", students[i].chem_marks);
        printf("Mathematics : %d\n", students[i].maths_marks);
        printf("Physics : %d\n", students[i].phy_marks);
        printf("Total : %d/300\n", total_marks);
        printf("Percent : %.2f%%\n", percentage);
        printf("\n");
    }

}
