#include"stdio.h"
double celc(double depth)
{
	return 10*(depth) + 20;
}
double farhen(double depth)
{
	return 1.8*(celc(depth)) + 32;
}
main()
{
	double depth;
	printf("Please enter the depth");
	scanf("%lf",&depth);
	printf("In far %f \n",farhen(depth));
	printf("In cel %f \n",celc(depth));
}
