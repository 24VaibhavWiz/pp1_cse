#include"stdio.h"
double a(double t)
{
	return 1086*sqrt((5*t)+297/247);
}
main()
{
	double t;
	printf("Please enter the value of T");
	scanf("%lf",&t);
	printf("the ans is %f",a(t));
}
