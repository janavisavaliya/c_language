#include<stdio.h>
main(){
	int n , i=1;
	printf("Enter any Number:- ");
	scanf("%d",&n);
	do{
		printf("%d\n",i);
		i++;
	}
	while(i<=n);
}
