#include <stdio.h>
int strLength(char name[]){
	int len = 0;
	int *ptr = &len;
	int i;

	for(i=0;name[i]!=NULL;i++){
		len++;
	}
	return *ptr;
}
void main(){
	char name[50];
	printf("Enter any Name: ");
	scanf("%[^\n]",&name);
	printf("Name\t: %s",name);
	printf("\nstring length: %d",strLength(name));
}

