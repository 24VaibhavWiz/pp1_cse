#include"stdio.h"
#include"math.h"
void revenue(int year,double *rev)
{
	year=year-1984;
	*rev=203.265*(pow(1.071,year));   
}
void predict(int *year2,int year,double rev2)
{
	year-=1984;
	*year2=1984+year;		
}
main()
{
	double rev,rev2;
	int year,year1,year2,count=0,range;
	printf("Please enter the year\n\n");
	scanf("%d",&year);
	revenue(year,&rev);
	printf("year's revenue is $%.3f\n\n",rev);
        printf("Please enter the revenue for prediction\n\n");
        scanf("%lf",&rev2);
	if(rev>=rev2)
	{	
		predict(&year2,year,rev2);
		printf("predicted year is %d\n\n",year2);
	}
	else
		printf("prediction not possible\n\n");
	printf("YEARS AND REVENUES(exciding $1 trillion)\n\n");
	printf("Please enter the range of years\n\n");
	scanf("%d",&range);
	printf("The given range is %d\n\n",range);
	year=1984;
	while((year>=1984)&&(count<=range))
	{
		revenue(year,&rev);
		if(rev>=1000)
		{
			printf("year : %d    -    revenue(millions) : $%.3f\n",year,rev);
			count++;
		}
		year++;
	}
}