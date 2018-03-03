#include"stdio.h"
#include"math.h"
void approx(double lg,double n,double *ng)
{
        lg=1.0;
        *ng=.5*(lg+(n/lg));
        while(fabs(*ng-lg)>0.005)
        {
                lg=*ng;
                *ng=.5*(lg+(n/lg));
        }
}
main()
{
        double ng,n,lg;
        printf("Please enter a number to get approximated square root\n");
        scanf("%lf",&n);
		approx(lg,n,&ng);
        printf("The approximation is %f\n",ng);
}
