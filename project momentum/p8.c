#include<stdio.h>
main(){
    int choice , bill , qty;
	const int pizza=250 , burger=90 , santula=300 , tacos=100 , guacamole=750 , germandesert=200 , ice_cream=50;
	printf("****************************************\n");
	printf("*                                      *\n");
	printf("*           BACKYARD BOWLS             *\n");
	printf("*                                      *\n");
	printf("****************************************\n");
	printf("press 1 for pizza\n");
	printf("press 2 for burger\n");
	printf("press 3 for santula\n");
	printf("press 4 for tacos\n");
	printf("press 5 for guacamole\n");
	printf("press 6 for german desert\n");
	printf("prees 7 for ice cream\n");
	printf("enter your choice:- ");
	scanf("%d",&choice);
	if(choice==1)
	{
		printf("how many plate you want:- ");
		scanf("%d",&qty);
		if(qty > 0)
		{
			bill = pizza * qty;
			printf("Bill = %d",bill);
			printf("thank you for visiting BACKYARD BOWLS");
		}
		else
		{
			printf("you can't select 0 quantity");
		}
	}
	else if(choice==2)
	{
		printf("how many plates you want:- ");
		scanf("%d",&qty);
		if(qty > 0)
		{
			bill = burger * qty;
			printf("Bill = %d",bill);
		}
		else
		{
			printf("you can't selsect 0 quantity");
		}
	}
	else if(choice==3)
	{
		printf("how many plates you want:- ");
		scanf("%d",&qty);
			if(qty > 0)
		{
			bill = santula * qty;
			printf("Bill = %d",bill);
		}
		else
		{
			printf("you can't selsect 0 quantity");
		}
	}
	else if(choice==4)
	{
		printf("how many plates you want:- ");
		scanf("%d",&qty);
			if(qty > 0)
		{
			bill = tacos * qty;
			printf("Bill = %d",bill);
		}
		else
		{
			printf("you can't selsect 0 quantity");
		}
	}
	else if(choice==5)
	{
		printf("how many plates you want:- ");
		scanf("%d",&qty);
			if(qty > 0)
		{
			bill = guacamole * qty;
			printf("Bill = %d",bill);
		}
		else
		{
			printf("you can't selsect 0 quantity");
		}
	}
	else if(choice==6)
	{
		printf("how many plates you want:- ");
		scanf("%d",&qty);
			if(qty > 0)
		{
			bill = germandesert * qty;
			printf("Bill = %d",bill);
		}
		else
		{
			printf("you can't selsect 0 quantity");
		}
	}
	else if(choice==7)
	{
		printf("how many plates you want:- ");
		scanf("%d",&qty);
			if(qty > 0)
		{
			bill = ice_cream * qty;
			printf("Bill = %d",bill);
		}
		else
		{
			printf("you can't selsect 0 quantity");
		}
	}
	else
	{
		printf("sorry , dish number you have added is nit available\nplease order anything else");
	}
	
	printf("\nTHANK YOU SO MUCH FOR VISITING OUR RESTAURANT...");
}
