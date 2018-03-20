#include"stdio.h"
#include"string.h"
main()
{
	char str_1[10],str_2[10];
	fgets(str_1,20,stdin);
	fgets(str_2,20,stdin);
	int n=strlen(str_2);
	n--;
	if(strncmp(str_1,str_2,n)==0)
		printf("same\n");
	else
		printf("different\n");
}
