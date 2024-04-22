#include<stdio.h>
 main(){
	int a,b,i,arr[i];
	printf("ENTER START YEAR:-");
	scanf("%d",&a);
	
	printf("ENTER END YEAR:-");
	scanf("%d",&b);
	
	for(arr[i]=a; arr[i]<=b; arr[i]++){
		if(arr[i] % 4== 0){
			printf("%d\n",arr[i]);
		}
	}
}
