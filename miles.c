#define con 1.609
#include"stdio.h"
main()
{	double mile;
	printf("Please enter the miles to be converted \n");
	scanf("%lf",&mile);
	miles();
}
void miles( double mile,double kilo) 
{ 
	kilo=con*mile;
	return kilo;	
}
