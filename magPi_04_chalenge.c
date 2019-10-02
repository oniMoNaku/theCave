/* today is 389f */
/* the C cave */
/* magPi - 04 */

#include <stdio.h>
int main()
{
	int term = 1; /* set the minimum number of calculations */
	int triangularNumber = 0; /* ... */
	printf("How many terms in the series would you like to calculate?\n"); /* Ask the user */
	scanf("%d",&term); /* Read the number of calculations needed. */
	if(term > 24) { /* ... */
		printf("Sorry I can calculate only 24 terms.\n"); /* Apologise. */
	}
	else 
	{
		int i; int limit = term + 1;
		for(i=1;i<limit;i++) /* Loop from zero to number of terms. */
		{ 
		 	triangularNumber = triangularNumber + i;
		 	printf(" triangular number = %d\n",triangularNumber); /* print the result. */
		}
		printf("That was fun\n"); /* say bye. */
	}
return 0;
}
