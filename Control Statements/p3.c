/*Write a program that takes a number as input and checks if it's
positive, negative, or zero. Print the result accordingly.*/

#include<stdio.h>
main(){
	int a;
	printf("Enter the value of A:- ");
	scanf("%d",&a);
	if(a<0){
		printf("Number is Negative...");
	}
	else if(a>0){
		printf("Number is Positive...");
	}
	else{
		printf("Number is Null...");
	}
}
