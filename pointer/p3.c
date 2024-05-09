#include<stdio.h>
main(){
	int n;
	int a[n];
	printf("Enter the size of an array: ");
	scanf("%d",&n);
	int *ptr;
	int i;
	for(i=0;i<n;i++){
		printf("Enter element %d: ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++){
		ptr[i] = &a[i];
	}
	
	printf("The square are ");
	for(i=0;i<n;i++){
		int sqr = (*ptr[i]) * (*ptr[i]);
		printf("%d\n",sqr);
	}
}
