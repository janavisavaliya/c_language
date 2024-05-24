#include<stdio.h>
main(){
	int i;
	char str[50];
	int count = 0;
	printf("Enter any name or sentence: ");
	gets(str);
	int length = strlen(str);

	for(i=0;i<length;i++){
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
			printf("%c",str[i]);
			count++;
		}
		else{
			printf(" ");
		}
	}
	printf("\nThe number of vowels in this string is %d",count);
}
