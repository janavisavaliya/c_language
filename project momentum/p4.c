#include<stdio.h>
main(){
	int choice;
	printf("press 1 for sunday...\n");
	printf("press 2 for monday...\n");
	printf("press 3 for tuesday...\n");
	printf("press 4 for wednesday...\n");
	printf("press 5 for thrusday...\n");
	printf("press 6 for friday...\n");
	printf("press 7 for saturday...\n");
	printf("Enter your choice:- ");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("TODAY IS SUNDAY...");
			break;
		case 2:
			printf("TODAY IS MONDAY....");
			break;
		case 3:
			printf("TODAY IS TUESDAY...");
			break;
		case 4:
			printf("TODAY IS WEDNESDAY...");
			break;
		case 5:
			printf("TODAY IS THURSDAY...");
			break;
		case 6:
			printf("TODAY IS FRIDAY...");
			break;
		case 7:
			printf("TODAY IS SATURDAY...");
			break;
		default:
			printf("PLEASE, ENTER VALID CHOICE...");
	}
}
