#include"stdio.h"
#include"math.h"
main()
{
	int x=1;
	double e=1 , diff=1;
	while(diff > 0.000001)
	{
		e=pow(((2.0*x)+1.0)/((2.0*x)-1.0),x);
		diff=fabs(exp(1)-e);
		printf("%d\n",x);
		x++;
	}
	printf("The value of e is %f\n",e);

}
