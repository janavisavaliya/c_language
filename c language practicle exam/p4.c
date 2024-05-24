#include<stdio.h>
year(){
	int year;
	printf("Enter any year: ");
	scanf("%d",&year);
	if(year%4==0){
		printf("%d is leap year...",year);
	}	
	else{
		printf("%d is not leap year...",year);
	}
}

main(){
	year();
}
