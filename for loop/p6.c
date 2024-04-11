#include<stdio.h>
main()
{
	int i , n=20 , sum , cube;
	printf("enter i:- ");
	scanf("%d",&i);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			
			printf("%d\n",i);
			cube = i * i * i;
			sum = sum + cube;
		 }
	}
	printf("sum of all even number is : %d\n",sum);
	
}
