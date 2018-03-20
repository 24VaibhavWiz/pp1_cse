#include"stdio.h"
#include"string.h"
main()
{
	int i=0;
	int n=20;
	FILE *inp=fopen("input.txt","r");
	FILE *out=fopen("outout.txt","w");
	char str[n];
	fgets(str,n-1,inp);
	while(!feof(inp))
	{
		i++;
		fprintf(out,"%d:-%s\n",i,str);
		fgets(str,n-1,inp);	
		
	}
	fclose(out);
	fclose(inp);
}
