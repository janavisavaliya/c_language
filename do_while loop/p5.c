#include<stdio.h>
main() {
    int start_year,end_year;

    printf("Enter the starting year: ");
    scanf("%d", &start_year);

    printf("Enter the ending year: ");
    scanf("%d", &end_year);

    printf("Leap years between %d and %d are:\n", start_year, end_year);

	do{
   	if(start_year%4==0){
   		printf("%d\n",start_year);
	   }
	   start_year++;
   }
   while (start_year<=end_year);
   
}
