/*Create a program that prompts the user to enter their age and 
determines if they are eligible to vote (age 18 or older) or not.*/
#include<stdio.h>
main(){
	int age; 
	printf("Enter Your Age:- ");
	scanf("%d",&age);
	if(age<=0){
		printf("Please Enter Your Valid Age...");
	} 
	else if(age>18)
	{
		printf("You are Elligible for Vote...");
	}
	else{
		printf("Sorry, You are not Elligible for Vote...");
	}
}
