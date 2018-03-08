#include"stdio.h"
double sum_n_avg(double *a,double *b,double *c,double *sum,double *avg)
{
	*sum=(*a+*b+*c);
	*avg=(*sum/3);	
}
main()
{
	double a,b,c,sum,avg;
	printf("Please enter the three numbers\n");
	scanf("%lf%lf%lf",&a,&b,&c);
	sum_n_avg(&a,&b,&c,&sum,&avg);
	printf("the sum is %f and average is %f\n",sum,avg);
}

