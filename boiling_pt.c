#include"stdio.h"
main()
{
	double bp,ref,per;
	boiling_pt(bp,ref,per);
}
void boiling_pt(double bp,double ref,double per)
{
	double tot,fin;
	printf("Please enter the normal boilling point\n");
	scanf("%lf",&bp);
	printf("Please enter the observed boiling point\n");
	scanf("%lf",&ref);
	printf("Please enter the percentage to be calculated\n");
	scanf("%lf",&per);
	tot=bp-(bp*per);
	fin=bp+(bp*per);
	if((ref>=tot)&&(ref<=fin)&&(bp<=100))
	{
		printf("substance is water\n");
	}
	else if((ref>=tot)&&(ref<=fin)&&(bp<=357))
	{
		printf("substance is mercury\n");
	}
	else if((ref>=tot)&&(ref<=fin)&&(bp<=1187))
	{
		printf("substance is copper\n");
	}
	else if((ref>=tot)&&(ref<=fin)&&(bp<=2193))
	{
		printf("substance is silver\n");
	}else if((ref>=tot)&&(ref<=fin)&&(bp<=2660))
	{
		printf("substance is gold\n");
	}
	else
	{
		printf("substance is unknown");
	}
}

