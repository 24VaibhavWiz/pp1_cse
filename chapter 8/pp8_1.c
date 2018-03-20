#include"stdio.h"
#include"string.h"
void deblank(char st[],char st2[])
{
	char *s;
	strcpy(st2,"");
	s=strtok(st," ");
	while(s!=NULL)
	{
		strcat(st2,s);
		s=strtok(NULL," ");	
	}
	
}
main()
{
	char st[20];
	fgets(st,19,stdin);
	char st2[20];
	deblank(st,st2);
	printf("%s\n",st2);
}

