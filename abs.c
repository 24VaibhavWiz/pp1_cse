#include"stdio.h"
#include"math.h"
void abs(int n,int a[])
{
	int i;
	for(i=0;i>n;i++)
	{
		printf(" %f\n",fabs(a[i]));
	}
}
main()
{
	double a[10];
	int i,n;
	printf("Please enter the number of elements\n");
	scanf("%d",&n);
	printf("Please enter the elements of the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%lf",&a[i]);
	}
	abs(n,a);
}
