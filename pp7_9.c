#include"stdio.h"
#define STR_SIZE 8
#define GUESS 10
main()
{
	char guess[GUESS];
	char word[STR_SIZE]={'H','A','N','G','M','A','N'};
	int i,j=1;
	for(i=0;i<=STR_SIZE;i++)
	{
		guess[i]='*';
	}
	printf("A game of HangMan\n");
	printf("The word to guess is %d letters long nd you will get %d guesses.\n",STR_SIZE,GUESS);
	for(i=0;i<=GUESS;i++)
	{
		printf("Guess the letter no %d of the word :\n",j);
		scanf(" %c",&guess[i]);
		if(toupper(word[j-1])!=toupper(guess[i]))
			printf("Wrong guess for lrtter no. %d\n",j);
		else
		{
			printf("Your guess is r8 for letter no. %d\n",j);
			j++;
		}
		if(j==STR_SIZE)
			break;		
	}
	if(j==STR_SIZE)
		printf("WINNER\n");
	else
		printf("you LOSSE\n");
}
	
