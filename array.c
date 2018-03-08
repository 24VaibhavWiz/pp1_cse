#include"stdio.h"
void add(int a[],int b[],int c[],int n)
{
	int i;
	for(i=0;i<n;i++)
		c[i]=a[i]+b[i];
}
void dis(int c[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d\n",c[i]);
	}
}
main()
{
	int a[10],b[10],c[10];
	int i,n;
	printf("Please enter the number of elements for array 1\n");
	scanf("%d",&n);
	printf("Please enter the elements of the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Please enter the number of elements for array 2\n");
	scanf("%d",&n);
	printf("Please enter the elements of the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	printf("The value stored in array 3\n");
	add(a,b,c,n);
	dis(c,n);
}

