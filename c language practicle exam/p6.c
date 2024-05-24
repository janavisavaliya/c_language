#include<stdio.h>
#include<string.h>
struct movie{
	char title[20];
	char gen[10];
	char lan[10];
};
main(){
	int i;
	int n;
	printf("Enter the size of array of object: ");
	scanf("%d",&n);
	struct movie m1[n];
	struct movie m2[n];
	struct movie m3[n];
	for(i=1;i<=n;i++){
		fflush(stdin);
		printf("Enter the title of movie: ");
		gets(m1[i].title);
		fflush(stdin);
		printf("Enter the Generation: ");
		gets(m2[i].gen);
		fflush(stdin);
		printf("Enter your comfortable language: ");
		gets(m3[i].lan);
		printf("\n\n");
	}
	printf("\n=========================\n");
	for(i=1;i<=n;i++){
		printf("Movie name: %s\n",m1[i].title);
		printf("Generation: %s\n",m2[i].gen);
		printf("Language: %s\n",m3[i].lan);
		printf("\n---------------\n");
	}
}
