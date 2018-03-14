#include"stdio.h"
void merge(double a1[],double a2[],double a3[],int n,int m)
{	
	int i,j,k;
	k=0;j=0;
	for (i = 0; i < m + n;)
	 {
 	 	if (j < m && k < n) 
		{
     			if (a1[j] < a2[k]) 
			 {
       				 a3[i] = a1[j];
       				 j++;
     			 }
      			 else
			 {
       				 a3[i] = a2[k];
      				 k++;
     			 }
     			 i++;
   		 }
   		 else if (j == m) 
		 {
   			 for (; i < m + n;)
		 	 {
       				 a3[i] = a2[k];
  				 k++;
        			 i++;
     			 }
   		 }
   		 else
		 {
   		 	for (; i < m + n;)
			{
       				a3[i] = a1[j];
        			j++;
        			i++;
      			}
    		}
  }
}
main()
{
	double a1[20],a2[20],a3[40];
	int n,m,i,p,j,k;
	printf("Please enter the total number of elements in ARRAY-1\n");
	scanf("%d",&n);
	printf("Please enter the elements in ascending orders\n");
	for(i=0;i<n;i++)
	{
		printf("Enter element[%d]",i);
		scanf("%lf",&a1[i]);
	}
        printf("Please enter the total number of elements in ARRAY-2\n");
        scanf("%d",&m);
        printf("Please enter the elements in ascending orders\n");
        for(i=0;i<m;i++)
        {
                printf("Enter element[%d]",i);
                scanf("%lf",&a2[i]);
        }
	merge(a1,a2,a3,n,m);
	printf("After merging\n");
	for(i=0;i<(n+m);i++)
	{
		printf("%2f%3c",a3[i],' ');
	}
	printf("\n");	
}
