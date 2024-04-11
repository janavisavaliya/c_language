#include<stdio.h>
main(){
	int n;
	printf("Enter any Number:- ");
	scanf("%d",&n);
	do{
		printf("%d\n",n);
		n--;
	}
	while(n>=1);
}
