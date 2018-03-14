#include"stdio.h"
void compare(char a[],char b[],int n,int stn)
{
	int i,j,count=0;
	for(i=0;i<stn;i++)
	{
		for(j=0;j<n;j++)
		{
			if(strcmp(a[j],b[j]))
			{
				count ++;
			}
		}
	}
}
main()
{
	int n,i,j,k,id,stn,count;
        printf("Please enter the total number of questions\n");
        scanf("%d",&n);
	char a[n],b[n];
	printf("Please enter the correct answers\n");
	for(i=0;i<n;i++)
	{
		scanf(" %c",&a[i]);
	}
	printf("Please enter total numbers of Students\n");
	scanf("%d",&stn);
	printf("Please enter the Student's ID\n");
	for(i=0;i<stn;i++)
	{
		scanf("%d",&id);
	}
	printf("Please enter the Student's answers\n");
	for(j=0;j<n;j++)
	{
		scanf(" %c",&b[j]);
	}
	for(k=0;k<n;k++)
	{	
		compare(a,b,n,stn);
		printf("ID : %d    percentage secured : %.2f\n",id,(count/n)*100);
	}
}
