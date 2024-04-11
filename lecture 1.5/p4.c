/* Create a program that prompts the user to enter their age and determines if they are a child (age 12 or younger), a teenager 
(ages 13 to 19), an adult (ages 20 to 64), or a senior 
(age 65 or older).*/

#include<stdio.h>
main(){
	int age;
	printf("Enter Your Age:- ");
	scanf("%d",&age);
	if(age<=12){
		printf("Your are A Child...");
	}
	else if(age<=19){
		printf("You are a Teenager...");
	}
	else if(age<=64){
		printf("You are an Adult...");
	}
	else{
		printf("You are A senior...");
	}
}
