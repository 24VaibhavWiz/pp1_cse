#include"stdio.h"
main()
{
	
	int ch,a,b;
	printf("Plaese enter your choice");
	scanf("%d",&ch);
	if (ch == 1)
	{
		printf("Enter the celsius...");
		scanf("%d",&a);
		double f=(a*(1.8)+32);	
		printf("F is %f",f);
  	}
	else
	{
		printf("Enter the far...");
		scanf("%d",&b);
		double c=((b-32)*(0.556));
		printf("celcius is %f",c);
	}

}

