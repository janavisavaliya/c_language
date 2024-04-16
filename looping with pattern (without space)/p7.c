/*

A
B A
C B A
D C B A
E D C B A

*/

#include<stdio.h>
main(){
	char i , j;
	for(i='A';i<='E';i++){
		for(j=i;j>='A';j--){
			printf("%d ",j);
		}
		printf("\n");
	}
}
