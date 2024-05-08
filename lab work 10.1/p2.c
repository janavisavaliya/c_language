#include<stdio.h>

int div(){
	int n;
	printf("Enter any Number:- ");
	scanf("%d",&n);
	if(n % 3 == 0 && n % 5 == 0){
		printf("The number is divisable by 3 & 5 both.");
	}
	else{
		printf("The number is not divisable by 3 & 5.");
	}
	return n;
}

main(){
	div();
}
