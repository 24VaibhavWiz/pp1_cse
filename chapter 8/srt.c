#include"stdio.h"
#include"math.h"
#include"string.h"
main()
{
	char st[]={"baibhab"};
	int n=strlen(st);
	char st2[n];
	if(n%2!=0)
	{
		strmcpy(st2,str,ceil(n/2));
	}
	else(n%2==0)
	{
		strmcpy(st2,str,(n/2));
	}
}
