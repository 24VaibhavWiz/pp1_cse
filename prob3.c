#include"stdio.h"
#include"math.h"
void convert(int paise,int *rs,int *left)
{
	*left=(paise%100);
	*rs=(paise/100);
}
main()
{
	int rs,n;
	int paise,left;
	printf("Please enter the amount in paise\n");
	n=scanf("%d",&paise);
	convert(paise,&rs,&left);
	if(n==1)
	{
		if((paise<0)||(ceil(paise)>paise))
			printf("invalid entry\n");
		else
		{
			printf("converted amount is %d Rs\n",rs);
			printf("converted amount is %d paise\n",left);
		}
	}
	else
		printf("wrong input\n");
	
}

