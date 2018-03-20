#include"stdio.h"
#include"string.h"
#include"math.h"
int operation(char COLOR_CODES[10][7],int size, char tar[]);
main()
{
	char COLOR_CODES[10][7] = {"black", "brown", "red",
	"orange", "yellow", "green", "blue", "violet", "gray",
	"white"},bn1[7],bn2[7],bn3[7];
	char ch='y';
	int size;
	int res=0,val;
	printf("Enter the colors of the resistor's three bands, beginning withthe band nearest the end. Type the colors in lowercase lettersonly, NO CAPS.\n");	
	while((ch=='y')||(ch=='Y'))
	{
		printf("Band 1 => ");
		scanf("%s",bn1);
		printf("Band 2 => ");
		scanf("%s",bn2);
		printf("Band 3 => ");
		scanf("%s",bn3);
		val=operation(COLOR_CODES,size,bn1);
		if(val==0)
			res=10*val;
		val=operation(COLOR_CODES,size,bn2);
		if(val==0)
			res=res+val;
		val=operation(COLOR_CODES,size,bn3);
		if(val==0)
			res=(res*(int)pow(10,val)/1000);
		else
			printf("invlaid color\n");
			
		printf("Resistance value: %d kilo-ohms\n",res);
		printf("Do you want to decode more (y/n)\n");
		scanf(" %c",&ch);
	}
}
int operation(char COLOR_CODES[10][7],int size, char tar[])
{
	int i;
	for(i=0;i<size;i++)
	{
		if(strcmp(COLOR_CODES[i],tar)==0)
			return i;
	}
	return -1;
}
