//Grade Calculator

#include<stdio.h>
main(){
	float total_marks, pr;
	printf("Enter Your Total Marks:- ");
	scanf("%f",&total_marks);
	
	pr = (total_marks / 500) * 100;
	
	printf("Percentege:- %f\n",pr);
	if(pr>=90){
		printf("GRADE A...");
	}
	else if(pr>=80){
		printf("GRADE B...");
	}
	else if(pr>=70){
		printf("GRADE C...");
	}
	else if(pr>=60){
		printf("GRADE E...");
	}
	else if(pr>=50){
		printf("GRADE F...");
	}
	else{
		printf("YOU ARE FAILED...");
	}
}
