#include <stdio.h>
main()
{
	FILE *fp1;
	FILE *fp2;
	fp1 = fopen("read.txt","r");
	if(fp1!=NULL)
	{
		char message[50];
		fscanf(fp1,"%[^\n]",&message);
		fp2 = fopen("write.txt","w");
		if(fp2!=NULL)
		{
			fprintf(fp2,"%s",message);
		}
	}
	else
	{
		printf("File is Not Opening");
	}
}
