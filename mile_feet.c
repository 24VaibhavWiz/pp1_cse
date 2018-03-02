#include"stdio.h"
double mps(int min,double sec)
{
	double second=(min*60)+sec;
	return (double)1609.34/second;
}
double fps(int min,double sec)
{
	double second=(min*60)+sec;
	return (double)5280/second;
}
main()
{
	int min;double sec;
	printf("Please enter the time in minute");
	scanf("%d",&min);
	printf("Please enter the seconds");
	scanf("%d",&sec);
	printf("The mps is %f",mps(min,sec));
	printf("The fps is %f",fps(min,sec));
	printf("Please enter the time in minute");
	scanf("%d",&min);
	printf("Please enter the seconds");
	scanf("%d",&sec);
	printf("The mps is %f",mps(min,sec));
	printf("The fps is %f",fps(min,sec));
	printf("Please enter the time in minute");
	scanf("%d",&min);
	printf("Please enter the seconds");
	scanf("%d",&sec);
	printf("The mps is %f",mps(min,sec));
	printf("The fps is %f",fps(min,sec));
	printf("Please enter the time in minute");
	scanf("%d",&min);
	printf("Please enter the seconds");
	scanf("%d",&sec);
	printf("The mps is %f",mps(min,sec));
	printf("The fps is %f",fps(min,sec));
}
