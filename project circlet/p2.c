/*

        5
      4 5
    3 4 5
  2 3 4 5
1 2 3 4 5

*/

#include<stdio.h>
main(){
	int i , j , s;
	for(i=5;i>=1;i--){
		for(s=i-1;s>=1;s--){
			printf("  ");
		}
		for(j=i;j<=5;j++){
			printf("%d ",j);
		}
		printf("\n");
	}
}
