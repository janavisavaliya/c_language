#include<stdio.h>
main(){
	int i = 1 , n , fact;
	printf("Enter any number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		fact = fact * i;
	}
	printf("The factorial of %d is %d",n,fact);
}
