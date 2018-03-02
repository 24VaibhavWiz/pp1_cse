#include"stdio.h"
main()
{
	double vol,viti,min;
	printf("Please enter the volume and min\n");
	scanf("%lf %lf",&vol,&min);
	viti=(vol/min)*60;
	printf("The VTBI is %f\n",vol);
	printf("The rate is %f\n",viti);	
}
