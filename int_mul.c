#include"stdio.h"
int mul(int n,int a[])
{
	int i;
	for(i=0;i<n;i++)
	{
		a[i]=a[i]*a[i+1];
	}
	printf("%d\n",a[i]);
}	
main()
{
	int a[10],i,n;
	printf("Please enter the number of elements\n");
	scanf("%d",&n);
	printf("Please enter the elements of the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	mul(n,a);
}
