#include<stdio.h>
int cube(){
	int n;
	printf("Enter any Number:- ");
	scanf("%d",&n);
	return n * n * n;
}

main(){
	printf("The Cube is %d",cube());
}
