#include <stdio.h>

void main()
{
	FILE *fp;
	FILE *fp2;
	
	fp = fopen("janavi.txt","r");
	
	if(fp!=NULL)
	{
		char msg[20];
		
		fscanf(fp,"%[^\n]",&msg);
		
		fp2 = fopen("write.txt","w");
		
		if(fp2!=NULL)
		{
			fprintf(fp2,"%s",msg);
		}
	}
	else
	{
		printf("File is Not Open...........");
	}
}
