#include"stdio.h"
#include"math.h"
is_prime(int n)
{
	int i;
	if(n==1)
		return 0;
	for(i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}
main()
{
	int a[10];
	int i,n;
	printf("Please enter the array elements\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		if(is_prime(a[i]))
			printf("The primes are %d \n",a[i]);
	}
}
