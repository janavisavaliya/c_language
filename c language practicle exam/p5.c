#include<stdio.h>
swap(int *ptr1 , int *ptr2){
	int c;
	c = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = c;
}

main(){
	int a , b;
	printf("Enter the value of a: ");
	scanf("%d",&a);
	printf("Enter the value of b: ");
	scanf("%d",&b);
	swap(&a,&b);
	printf("The swapped variables: \n");
	printf("a: %d\n",a);
	printf("b: %d",b);
}
