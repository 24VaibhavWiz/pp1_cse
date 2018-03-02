#include"stdio.h"
double total_cost(double in_hs,double an_cost,double tax)
{
        return in_hs+(5*an_cost)+(5*in_hs*tax);
}
main()
{
        double total,in_hs,an_cost,tax;
        printf("PLease enter the initial house cost");
        scanf("%lf",&in_hs);
        printf("PLease enter the anual fuel cost");
        scanf("%lf",&an_cost);
        printf("PLease enter the tax rate");
        scanf("%lf",&tax);
        printf("The total cost is %f \n",total_cost(in_hs,an_cost,tax));
}
~                                                                                                                                               
~                                                                                                                                               
~                                                                                                                                               
~       
