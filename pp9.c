#include"stdio.h"
#include"math.h"
void drag_force(double p,double cd,double v,double a,double *f)
{
        *f=.5*a*p*cd*pow(v,2);
}
int main()
{
        double p,cd,v,a,f;
        printf("Please enter the area\n");
        scanf("%lf",&a);
        printf("Please enter the value of cd\n");
        scanf("%lf",&cd);
        printf("Please enter the preasure\n");
        scanf("%lf",&p);
        printf("Velocity:         Drag force:\n\n");
        while(v<=40)
        {
                drag_force(p,cd,v,a,&f);
                printf("%.lf     -        %f\n\n",v,round(f));
                v+=5;
        }
}
//use gcc pp9.c -lm -std=c99 at compilation time by default gcc uses std=c89//