/*Write a program that takes an integer as input and checks 
if it is even or odd. Print "Even" if the number is even and 
"Odd" if it's odd.*/


#include<stdio.h>
main(){
	int num;
	printf("Enter any Number:- ");
	scanf("%d",&num);
	if(num%2==0){
		printf("Number is Even...");
	}
	else{
		printf("Number is Odd...");
	}
}
