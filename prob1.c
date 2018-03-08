#include "stdio.h"
main()
{
	FILE *inp;
	FILE *outp;
	int count=0;
	double item;
	int input_status;
	inp = fopen("indata.txt","r");
	outp = fopen("outdata.txt","w");
	input_status = fscanf(inp,"%lf",&item);
	while (input_status == 1)
	{
		fprintf(outp, "%f\n",item);
		count++;
		input_status = fscanf(inp,"%lf",&item);
	}
	printf("%d\n",count);
	fclose(inp);
	fclose(outp);
}
