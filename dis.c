#include"stdio.h"
void increament(double a[],int n)
{
	int i;
	for(i=0;i<n;i++)
		a[i]+=2;
}
void dis(double a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\n%.1f",a[i]);
	}
}
main()
{
	double a[20];
	int i,n;
	printf("Please enter the number of elements\n");
	scanf("%d",&n);
	if(n>20)
		printf("overflow \ntry for less than or equal to value 20\n");
	else
	{
		printf("Please enter the array elements\n");
		for(i=0;i<n;i++)
		{
			scanf("%lf",&a[i]);
		}
		dis(a,n);
		printf("\n");
		increament(a,n);
		dis(a,n);
		printf("\n");
	}
}
