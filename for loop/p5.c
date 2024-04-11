#include<stdio.h>
main() {
    int start_year,end_year,i;

    printf("Enter the starting year: ");
    scanf("%d", &start_year);

    printf("Enter the ending year: ");
    scanf("%d", &end_year);

    printf("Leap years between %d and %d are:\n", start_year, end_year);

   for (i=start_year;i<=end_year;i++){
   	if(i%4==0){
   		printf("%d",i);
	   }
	   printf("\n");
   }
   
}
