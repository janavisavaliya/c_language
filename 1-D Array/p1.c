#include<stdio.h>
main(){
	
	int a , i , b , arr[a] , arr1[b];
	
	printf("Enter the size of array A:- ");
	scanf("%d",&a);
	for(i=0;i<a;i++){
		printf("Arr[%d]: ",i);
		scanf("%d",&arr[i]);
	} 
	
	printf("Enter the size of array B:- ");
	scanf("%d",&b);
	for(i=0;i<b;i++){
		printf("Arr1[%d]: ",i);
		scanf("%d",&arr1[i]);
	} 
	
	printf("Array C is:");
	for(i=0;i<a;i++){
		printf("%d ",arr[i]);
	}
	for(i=0;i<b;i++){
		printf("%d ",arr1[i]);
	}
}
