#include"stdio.h"
int odd(int bar_code[],int odd_sum)
{
	int i;
	odd_sum=0;
	for(i=1;i<12;i+=2)
	{
		odd_sum+=bar_code[i];
		printf(" %d + ",bar_code[i]);
	}
	return odd_sum;
}
int even(int bar_code[],int eve_sum)
{
	int i;
	eve_sum=0;
	for(i=2;i<11;i+=2)
	{
		eve_sum+=bar_code[i];
		printf(" %d + ",bar_code[i]);
	}
	return eve_sum;
}
main()
{
	int bar_code[20],i,tot,eve_sum,odd_sum,fig;
	printf("Please enter the 12 code(+ve integer)\n");
	for(i=1;i<13;i++)
	{
		scanf("%d",&bar_code[i]);
	}
	printf("TOTAL IN ODD %d\n",odd(bar_code,odd_sum)*3);
	printf("TOTAL IN EVEN %d\n",even(bar_code,eve_sum));
	printf("TOTAL IS  %d\n",((odd(bar_code,odd_sum)*3)+(even(bar_code,eve_sum))));
	fig=(odd(bar_code,odd_sum)*3)+(even(bar_code,eve_sum));
	if(fig%10==0)
		printf("The code check is %d\n",fig);
	else
		printf("The code check is %d\n",(10-(fig%10)));
	if(bar_code[12]==(10-fig%10))
		printf("Valideted\n");
	else
		printf("Invalid\n");
}  
