//Q.1 Write a Program to create a Student Record System for 3 students using structure. Consider the below-mentioned attributes in the Student structure:
//- stu_id
//- stu_name
//- stu_age
//- stu_course
//- stu_city
//- stu_standard
//- stu_school

#include<stdio.h>

struct student{
	int stu_id;
	char stu_name[20];
	int  stu_age;
	char stu_course[10];
	char stu_city[10];
	int stu_semester;
	char stu_school[15];

};

void main()
{
	int n;
	printf("enter number of student:");
	scanf("%d",&n);
	
	
	struct student s1[n];
	
	int i;
	
	for(i=0;i<n;i++)
	{
		printf("enter the id\t:");
		scanf("%d",&s1[i].stu_id);
		
		fflush(stdin);
		printf("enter the name\t:");
		gets(s1[i].stu_name);
		
		printf("enter the age\t:");
		scanf("%d",&s1[i].stu_age);
		
		fflush(stdin);
		printf("enter the course\t:");
		gets(s1[i].stu_course);
		
		fflush(stdin);
		printf("enter the city\t:");
		gets(s1[i].stu_city);
		
		printf("enter the standard\t:");
		scanf("%d",&s1[i].stu_semester);
		
		fflush(stdin);
		printf("enter the school\t:");
		gets(s1[i].stu_school);
	}
	
	printf("\n\n");
	printf("|ID\t NAME\t AGE\t COURSE\t\t CITY\t STANDARD\t SCHOOL|\n");
	printf("|--\t ----\t ---\t ------\t\t ----\t --------\t ------|\n");
	
	
	for(i=0;i<n;i++)
	{
		printf("|%d\t %s\t %d\t %s\t %s\t %d\t %s|\n",s1[i].stu_id,s1[i].stu_name,s1[i].stu_age,s1[i].stu_course,s1[i].stu_city,s1[i].stu_standard,s1[i].stu_school);		
	}
	
	
}
