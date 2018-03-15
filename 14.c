#include"stdio.h"
#include"math.h"
void get_poly( double coeff[], int* n );
double eval_poly(const double coeff[], int n,double x )
{
	int i;
	double poly=0;
	for(i=0;i<n;i++)
		poly=poly+(coeff[i]*pow(x,i));
	printf("Polynomial value :- %.2f\n",poly);
}
void get_poly(double coeff[], int* n )
{
	int i;
	printf("Please enter the polynomial co-efficient\n");
	for(i=0;i<*n;i++)
	{
		scanf("%lf",&coeff[i]);
	}
}
main()
{
	double x;
	int i,n;
	printf("Please enter the Polynomial degree(<8)\n");
	scanf("%d",&n);
	double coeff[n];
	printf("Please enter the value of x\n");
	scanf("%lf",&x);
	get_poly(coeff,&n);
	printf("P(x) = ");
	for(i=0;i<n;i++)
		printf(" (%.2f * x ^ %d) + ",coeff[i],i);
	printf("\n");
	eval_poly(coeff,n,x);

}
