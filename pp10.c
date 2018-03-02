#include"stdio.h"
#include"math.h"
void add(double num,double *total)
{
        *total=*total+num;
}
void sub(double num,double *total)
{
        *total=*total-num;
}
void power(double num,double *total)
{
        *total=pow(*total,num);
}
void div(double num,double *total)
{
        *total=*total/num;
}
void mul(double num,double *total)
{
	*total=*total*num;
}
main()
{
	double total,num;
	char ch;
	printf("Valid operators\n");
	printf("\n+ -  add\n- -  subtract\n^ -  power\n/ -  divide\n* -  multiply\nq -  Quit\n");
	while(ch!='q')
	{
                printf("\nPlease enter the operator for valid inputs\n");
                scanf(" %c",&ch);
		if(ch!='q')
		{
               		printf("\nPlease enter the operand\n");
                	scanf("%lf",&num);
			if(ch=='+')
			{
				add(num,&total);
				printf("your answer is %.1lf\n",total);
			}
			else if(ch=='-')
			{
				sub(num,&total);
				printf("your answer is %.1lf\n",total);
			}
			else if(ch=='^')
			{
				power(num,&total);
				printf("your answer is %.1lf\n",total);
			}
			else if(ch=='/')
			{
				div(num,&total);
				printf("your answer is %.1lf\n",total);
			}
			else if(ch=='*')
			{
				mul(num,&total);
				printf("your answer is %.1lf\n",total);
			}
		}

	}
}	