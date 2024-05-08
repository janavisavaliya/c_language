/*
 Write a menu-driven program to implement arithmetic operations such as +, -, *, /, and % using UDF, switch case, and looping. Make sure that the program is endless until a certain letter is pressed.
For example,
Output:
Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit

Enter your choice: 1
Enter the first number: 5
Enter the second number: 3
Addition of 5 and 3 is 8

Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit

Enter your choice: 4
Enter the first number: 10
Enter the second number: 5
Division of 10 and 5 is 2

Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit

Enter your choice: 0
*/
#include<stdio.h>
int sum(){
	int first,second,c;
	printf("enter the first num: ");
	scanf("%d",&first);
	printf("enter the second num: ");
	scanf("%d",&second);
	c=first+second;
	printf("the addition is %d\n\n",c);
}
int sub(){
    int first,second,c;
	printf("enter the first num: ");
	scanf("%d",&first);
	printf("enter the second num: ");
	scanf("%d",&second);
	c=first-second;
	printf("the substraction is %d\n\n",c);
}
int mult(){
    int first,second,c;
	printf("enter the first num: ");
	scanf("%d",&first);
	printf("enter the second num: ");
	scanf("%d",&second);
	c=first*second;
	printf("the multiplication is %d\n\n",c);  
   
}
int div(){
    int first,second,c;
	printf("enter the first num: ");
	scanf("%d",&first);
	printf("enter the second num: ");
	scanf("%d",&second);
	c=first/second;
	printf("the devision is %d\n\n",c);  
}
  
void main(){
	int choice;

do
{
  printf("press 1 for Addition...\n");
  printf("press 2 for Substraction...\n");
  printf("press 3 for Multiplication...\n");
  printf("press 4 for Division...\n");
  printf("press 5 for Modulus...\n");
  printf("press 0 for Exit...\n");
  printf("enter your choice: ");
  scanf("%d",&choice);
  switch(choice){
  
  case 1:
        sum();
		break;
  case 2:
  	    sub();
		break;
  case 3:
        mult();
		break;
  case 4:
  	    div();
  	    break;
  case 0:
  	    printf("exicuted successfully...");
  	    break;
		default:
		        printf("not available...\n");
				break;
  }
}while(choice!=0);
}

