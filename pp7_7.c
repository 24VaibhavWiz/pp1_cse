#include"stdio.h"
#include"math.h"
void print_vector(double z[],int n)
{
        int i;
        printf("Normalized form is \n");
        for(i=0;i<n;i++)
        {
                printf("%5c %f",' ',z[i]);
        }
	printf("\n");
}

void normalize_vector(double v[],int n)
{
        double sum=0,z[20],mg;
        int i;
        for(i=0;i<n;i++)
        {
                sum+=(v[i]*v[i]);
                mg=sqrt(sum);
        }
        printf("sum is %f\n",sum);
        for(i=0;i<n;i++)
        {
                z[i]=v[i]/mg;
        }
        print_vector(z,n);
}
void scan_vector(int n)
{
	int i;
	double v[20];
	for(i=0;i<n;i++)
	{
		printf("Please enter the vector element[%d]\n",i);
		scanf("%lf",&v[i]);
	}
	normalize_vector(v,n);
}
main()
{
	int n;
	printf("Please enter the limit\n");
	scanf("%d",&n);
	scan_vector(n);
}
