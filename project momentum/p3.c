#include<stdio.h>
main(){
	float p , c , b , m , comp , total , pr;
	const int totalmarks=500;
	printf("OBTAINED MARKS:-\n");
	printf("PHYSICS: ");
	scanf("%f",&p);
	printf("CHEMISTRY: ");
	scanf("%f",&c);
	printf("BIOLOGY: ");
	scanf("%f",&b);
	printf("MATHEMATICS: ");
	scanf("%f",&m);
	printf("COMPUTER: ");
	scanf("%f",&comp);
	total = p + c + b + m + comp;
	printf("TOTAL = %.2f\n",total);
	pr = total * 100 / totalmarks;
	printf("PERCENTAGE = %.2f\n",pr);
	if(pr >= 90)
	{
		printf("GRADE A");
	}
	else if(pr >= 80)
	{
		printf("GRADE B");
	}
	else if(pr >= 70)
	{
		printf("GRADE C");
	}
	else if(pr >= 60)
	{
		printf("GRADE D");
	}
	else if(pr >= 50)
	{
		printf("GRADE E");
	}
	else if(pr >= 40)
	{
		printf("GRADE F");
	}
	else
	{
		printf("you are failed");
	}
}
