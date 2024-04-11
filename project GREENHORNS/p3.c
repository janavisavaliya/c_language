#include<stdio.h>
main(){
	float angle1 , angle2 , angle3;
	printf("Enter Angle1:- ");
	scanf("%f",&angle1);
	printf("Enter Angle2:- ");
	scanf("%f",&angle2);
	
	angle3 = 180 - (angle1 + angle2);
	printf("Angle3 is %f",angle3);
}
