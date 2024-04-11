#include<stdio.h>
main()
{
	int i , n=20 , sum , cube;
	printf("enter i:- ");
	scanf("%d",&i);
	do{
		if(i%2==0)
		{
			
			printf("%d\n",i);
			cube = i * i * i;
			sum = sum + cube;
		 }
		i++;
	}
	while(i<=n);
	printf("sum of all even number is : %d\n",sum);
	
}
