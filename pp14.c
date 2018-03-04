#include"stdio.h"
#include"math.h"
main()
{
	int x=1;
	double e;
	while(1)
	{
		e=pow(((2*x)+1)/((2*x)-1),x);
		printf("%d\n",x);
		if(abs(e-exp(1)) < 0.000001 )
		{
			x++;
		}
		else
		{
			printf("The value of e is %f\n",e);
			exit(0);
		}
	}
}