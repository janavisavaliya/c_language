#include<stdio.h>
main(){
	int choice;
	printf("press 1 for january...\n");
	printf("press 2 for february...\n");
	printf("press 3 for March...\n");
	printf("press 4 for April...\n");
	printf("press 5 for May...\n");
	printf("press 6 for June...\n");
	printf("press 7 for July...\n");
	printf("press 8 for August...\n");
	printf("press 9 for September...\n");
	printf("press 10 for October...\n");
	printf("press 11 for November...\n");
	printf("press 12 for December...\n");
	printf("Enter your choice:- ");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("JANUARY...");
			break;
		case 2:
			printf("FEBRUARY....");
			break;
		case 3:
			printf("MARCH...");
			break;
		case 4:
			printf("APRIL...");
			break;
		case 5:
			printf("MAY...");
			break;
		case 6:
			printf("JUNE...");
			break;
		case 7:
			printf("JULY...");
			break;
		case 8:
			printf("AUGUST...");
			break;
		case 9:
			printf("SEPTEMBER...");
			break;
		case 10:
			printf("OCTOBER...");
			break;
		case 11:
			printf("NOVERMBER...");
			break;
		case 12:
			printf("DECEMBER...");
			break;
		default:
			printf("PLEASE, ENTER VALID CHOICE...");
	}
}
